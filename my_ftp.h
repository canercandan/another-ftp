/*
** my_ftp.h for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 10:01:00 2008 caner candan
** Last update Tue Apr  8 14:58:15 2008 caner candan
*/

#ifndef __MY_FTP_H__
# define __MY_FTP_H__

# define PORT_DEFAULT	"12345"
# define NB_CLI		5

# define PROMPT_CMD	"<-- %s\n"
# define PROMPT_RES	"--> "

# define LIST_APP	"ls"
# define LIST_OPT	"-la"

# define PWD_APP	"pwd"

# define DELIMIT	" "

# define FAILED		-1
# define SUCCESS	0
# define RET_OK		1
# define RET_QUIT	2
# define RET_CD		3
# define RET_GET	4
# define RET_PUT	5

//# define EOR		1 /* determine end of transfert */
//# define EOF		2 /* determine end of file transfered */

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

typedef struct	s_req
{
  int		req;
  int		(*f)(t_cmd *cmd);
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
int	get_client(int cs);
int	send_cmd(char *str, int cs);
int	send_cmd_param(t_cmd *t);
void	send_cmd_client(int cs, t_cmd *t);
void	send_cmd_server(t_cmd *t);
char	*trim(char *s);

int	req_init(t_cmd *cmd);
int	req_list(t_cmd *cmd);
int	req_pwd(t_cmd *cmd);

int	xaccept(int s, struct sockaddr *addr, socklen_t *addrlen);
int	xbind(int s, const struct sockaddr *addr, socklen_t addrlen);
int	xconnect(int s, const struct sockaddr *name, socklen_t namelen);
int	xlisten(int s, int backlog);
ssize_t	xrecv(int s, void *buf, size_t len, int flags);
ssize_t	xsend(int s, const void *msg, size_t len, int flags);
int	xsocket(int domain, int type, int protocol);

#endif /* !__MY_FTP_H__ */
