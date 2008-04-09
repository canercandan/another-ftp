/*
** my_ftp.h for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 10:01:00 2008 caner candan
** Last update Wed Apr  9 18:38:41 2008 caner candan
*/

#ifndef __MY_FTP_H__
# define __MY_FTP_H__

# define MESG_WELCOME	"%d - [[[ Welcome to My_FTP {EPITECH.} ]]]\n"
# define MESG_SLOTS	"%d - You are user number %d of %d allowed.\n"
# define MESG_TIME	"%d - Local time is now %s. Server port: %d.\n"
# define MESG_TIMEOUT	"%d - You will be disconnected after %d minutes of inactivity.\n"
# define MESG_USER_OK	"%d - User %s OK. Password required\n"

# define CODE_CONFIRM	220
# define CODE_OK	331
# define CODE_FAILED	530

# define PORT_DEFAULT	"12345"
# define NB_CLI		5

# define PROMPT_CMD	"<-- %s\n"
# define PROMPT_RES	"--> "

# define PROMPT		"ftp> "

# define LIST_APP	"ls"
# define LIST_OPT	"-la"

# define PWD_APP	"pwd"

# define DELIMIT	" \n\t"

# define FALSE		-1
# define TRUE		0
# define WAIT		1
# define RET_OK		0
# define RET_QUIT	1
# define RET_CD		2
# define RET_GET	3
# define RET_PUT	4

//# define EOR		1 /* determine end of transfert */
//# define EOF		2 /* determine end of file transfered */

# define RQ_LIST	"LIST"
# define RQ_GET		"GET"
# define RQ_PUT		"PUT"
# define RQ_USER	"USER"
# define RQ_PASS	"PASS"
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

# define CMD_LIST	"ls"
# define CMD_DIR	"dir"
# define CMD_CWD	"cd"
# define CMD_MKD	"mkdir"
# define CMD_DELE	"delete"
# define CMD_RN		"rename"
# define CMD_RMD	"rmdir"
# define CMD_FTP	"ftp"
# define CMD_OPEN	"open"
# define CMD_HELP	"help"
# define CMD_ASCII	"ascii"
# define CMD_BINARY	"binary"
# define CMD_QUIT	"quit"
# define CMD_BYE	"bye"
# define CMD_DISC	"disconnect"
# define CMD_GET	"get"
# define CMD_PUT	"put"

# define ENV_PWD	"PWD"

# define PATH_SIZE	1024

/*
**
*/

# define CODE(buf, pos)	((buf)[pos])

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
  char		root[1024];
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

/*
**
*/

extern	t_req	gl_req[];

/*
**
*/

char	*parse_arg(char *param, int pos, int ac, char **av);
int	create_server(char *port);
void	get_client(t_ftp *f);
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

int	xaccept(int s, struct sockaddr *addr, socklen_t *addrlen);
int	xbind(int s, const struct sockaddr *addr, socklen_t addrlen);
int	xconnect(int s, const struct sockaddr *name, socklen_t namelen);
int	xlisten(int s, int backlog);
ssize_t	xrecv(int s, void *buf, size_t len, int flags);
ssize_t	xsend(int s, const void *msg, size_t len, int flags);
int	xsocket(int domain, int type, int protocol);

int	control_path(t_ftp *f, char *path);

#endif /* !__MY_FTP_H__ */
