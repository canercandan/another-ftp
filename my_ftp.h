/*
** my_ftp.h for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 10:01:00 2008 caner candan
** Last update Fri Apr  4 15:41:50 2008 caner candan
*/

#ifndef __MY_FTP_H__
# define __MY_FTP_H__

# define PORT_DEFAULT	"12345"
# define NB_CLI		5

# define PROMPT_CMD	"<-- %s\n"
# define PROMPT_RES	"--> "

# define CMD_RETR	"RETR"
# define CMD_DIR	"DIR"
# define CMD_LS		"LS"
# define CMD_PWD	"PWD"
# define CMD_QUIT	"QUIT"
# define CMD_BYE	"BYE"
# define CMD_CD		"CD"

# define CMD_LS_APP	"ls"
# define CMD_LS_OPT	"-la"

# define CMD_PWD_APP	"pwd"

# define DELIMIT	" "

# define CODE_QUIT	0xF0
# define CODE_CD	0xF1

/*
**
*/

# ifndef NULL
#  define NULL	0
# endif /* !NULL */

/*
**
*/

typedef struct	s_cmd
{
  char		*str;
  char		*cmd;
  char		*opt;
  char		*app;
  char		*param;
}		t_cmd;

/*
**
*/

char	*parse_arg(char *param, int pos, int ac, char **av);
int	create_server(char *port);
int	get_client(int cs);
int	send_cmd(char *str, int cs);
int	send_cmd_param(t_cmd *t);
void	send_cmd_client(int cs, t_cmd *t);
void	send_cmd_server(t_cmd *t);
char	*trim(char *s);

int	xaccept(int s, struct sockaddr *addr, socklen_t *addrlen);
int	xbind(int s, const struct sockaddr *addr, socklen_t addrlen);
int	xconnect(int s, const struct sockaddr *name, socklen_t namelen);
int	xlisten(int s, int backlog);
ssize_t	xrecv(int s, void *buf, size_t len, int flags);
ssize_t	xsend(int s, const void *msg, size_t len, int flags);
int	xsocket(int domain, int type, int protocol);

#endif /* !__MY_FTP_H__ */
