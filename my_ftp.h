/*
** my_ftp.h for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 10:01:00 2008 caner candan
** Last update Sun Apr 13 20:39:03 2008 caner candan
*/

#ifndef __MY_FTP_H__
# define __MY_FTP_H__

# define DEBUG		0

# define MESG_WELCOME	"[[[ Welcome to My_FTP {EPITECH.} ]]]"
# define MESG_SLOTS	"You are user number %d of %d allowed."
# define MESG_TIME	"Local time is now %s. Server port: %s."
# define MESG_TIMEOUT	"You will be disconnected after %d minutes of inactivity."
# define MESG_USER_OK	"User %s OK. Password required"
# define MESG_USER_GRP	"User %s has group access to:  %s	%s"
# define MESG_USER_DIR	"OK. Current restricted directory is /"
# define MESG_SYS_TYPE	"Remote system type is %s"
# define MESG_MODE	"Using %s mode to transfer files."

# define ERR_INVALID	"?Invalid command.\n"

# define MESG_CODE	"%c%c%c%c%s\r\n"

# define MESG_SEND	' '
# define MESG_NOTSEND	'-'

# define TYPE_UNIX	"UNIX"

# define HOST_DEFAULT	"127.0.0.1"
# define PORT_DEFAULT	"12345"
# define NB_CLI		5

# define PROMPT_CMD	"<-- %s\n"
# define PROMPT_RES	"--> "

# define PROMPT		"ftp> "

# define LIST_APP	"ls"
# define LIST_OPT	"-la"

# define PWD_APP	"pwd"

# define DELIMIT	" \r\n\t"

# define FALSE		-1
# define TRUE		0
# define WAIT		1
# define RET_QUIT	2
# define EMPTY		3

//# define EOR		1 /* determine end of transfert */
//# define EOF		2 /* determine end of file transfered */

# define RQ_LIST	"LIST"
# define RQ_GET		"GET"
# define RQ_PUT		"PUT"
# define RQ_USER	"USER"
# define RQ_PASS	"PASS"
# define RQ_ACCT	"ACCT"
# define RQ_PWD		"PWD"
# define RQ_CWD		"CWD"
# define RQ_MKD		"MKD"
# define RQ_DELE	"DELE"
# define RQ_RMD		"RMD"
# define RQ_PORT	"PORT"
# define RQ_MODE	"MODE"
# define RQ_SIZE	"SIZE"
# define RQ_STAT	"STAT"
# define RQ_QUIT	"QUIT"
# define RQ_RNFR	"RNFR"
# define RQ_RNTO	"RNTO"
# define RQ_SYST	"SYST"
# define RQ_FEAT	"FEAT"
# define RQ_EPSV	"EPSV"
# define RQ_PASV	"PASV"
# define RQ_EPRT	"EPRT"
# define RQ_NOOP	"NOOP"

# define SD_FMT		"%s %s\r\n"

# define SD_LIST	"ls"
# define SD_DIR		"dir"
# define SD_CWD		"cd"
# define SD_PWD		"pwd"
# define SD_MKD		"mkdir"
# define SD_DELE	"delete"
# define SD_RN		"rename"
# define SD_RMD		"rmdir"
# define SD_FTP		"ftp"
# define SD_OPEN	"open"
# define SD_HELP	"help"
# define SD_ASCII	"ascii"
# define SD_BINARY	"binary"
# define SD_QUIT	"quit"
# define SD_BYE		"bye"
# define SD_DISC	"disconnect"
# define SD_GET		"get"
# define SD_PUT		"put"

# define ENV_PWD	"PWD"

# define PATH_SIZE	1024

/*
**
*/

# ifndef NULL
#  define NULL	0
# endif /* !NULL */

/*
**
*/

typedef struct	s_ftp
{
  char		*host;
  char		*port;
  char		root[PATH_SIZE];
  int		s;
  int		cs;
}		t_ftp;

typedef struct	s_cmd
{
  char		*app;
  char		*param;
  t_ftp		*f;
}		t_cmd;

typedef struct	s_req
{
  char		*req;
  int		(*f)();
  char		*cmd;
  char		*opt;
}		t_req;

typedef struct	s_snd
{
  char		*snd;
  int		(*f)();
  char		*req;
}		t_snd;

/*
**
*/

extern t_req	gl_req[];
extern t_snd	gl_snd[];

/*
**
*/

char	*parse_arg(char *param, int pos, int ac, char **av);
int	create_server(t_ftp *f);
int	create_client(t_ftp *f);
void	get_client(t_ftp *f);
void	get_server(t_ftp *f);
char	*trim(char *s);

int	cmd_init(t_cmd *c, t_ftp *f, char *s);
void	cmd_server(t_cmd *c, t_req *r);
void	cmd_client(t_cmd *c, t_req *r);
void	cmd_exec(t_cmd *c,t_req *r);

int	req_init(t_cmd *c);
int	req_list(t_cmd *c, t_req *r);
int	req_get(t_cmd *c, t_req *r);
int	req_put(t_cmd *c, t_req *r);
int	req_user(t_cmd *c, t_req *r);
int	req_pass(t_cmd *c, t_req *r);
int	req_acct(t_cmd *c, t_req *r);
int	req_pwd(t_cmd *c, t_req *r);
int	req_cwd(t_cmd *c, t_req *r);
int	req_mkd(t_cmd *c, t_req *r);
int	req_dele(t_cmd *c, t_req *r);
int	req_rmd(t_cmd *c, t_req *r);
int	req_port(t_cmd *c, t_req *r);
int	req_mode(t_cmd *c, t_req *r);
int	req_size(t_cmd *c, t_req *r);
int	req_stat(t_cmd *c, t_req *r);
int	req_quit(t_cmd *c, t_req *r);
int	req_rn(t_cmd *c, t_req *r);
int	req_syst(t_cmd *c, t_req *r);
int	req_feat(t_cmd *c, t_req *r);
int	req_epsv(t_cmd *c, t_req *r);
int	req_pasv(t_cmd *c, t_req *r);
int	req_eprt(t_cmd *c, t_req *r);
int	req_noop(t_cmd *c, t_req *r);

int	xaccept(int s, void *addr, void *addrlen);
int	xbind(int s, const void *addr, void *addrlen);
int	xconnect(int s, const void *name, void *namelen);
int	xlisten(int s, int backlog);
void	*xrecv(int s, void *buf, void *len, int flags);
void	*xsend(int s, const void *msg, void *len, int flags);
int	xsocket(int domain, int type, int protocol);

int	control_path(t_ftp *f, char *path);

void	mesg_start(t_ftp *f);
void	mesg_dump(int cs, char *mesg, char *cde);

void	prompt();

char	*get_next_line(int fd);

void	client_signal(int signal);
void	client_listen(t_ftp *f);
void	client_send(t_ftp *f);

int	send_init(t_ftp *f, char *s);
int	send_list(t_cmd *c, t_snd *s);
int	send_cwd(t_cmd *c, t_snd *s);
int	send_pwd(t_cmd *c, t_snd *s);
int	send_mkd(t_cmd *c, t_snd *s);
int	send_dele(t_cmd *c, t_snd *s);
int	send_rn(t_cmd *c, t_snd *s);
int	send_rmd(t_cmd *c, t_snd *s);
int	send_ftp(t_cmd *c, t_snd *s);
int	send_open(t_cmd *c, t_snd *s);
int	send_help(t_cmd *c, t_snd *s);
int	send_ascii(t_cmd *c, t_snd *s);
int	send_binary(t_cmd *c, t_snd *s);
int	send_quit(t_cmd *c, t_snd *s);
int	send_bye(t_cmd *c, t_snd *s);
int	send_disc(t_cmd *c, t_snd *s);
int	send_get(t_cmd *c, t_snd *s);
int	send_put(t_cmd *c, t_snd *s);
int	send_noop(t_ftp *f);

#endif /* !__MY_FTP_H__ */
