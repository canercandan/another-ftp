/*
** req_init.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:46:58 2008 caner candan
** Last update Wed Apr  9 09:38:53 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include "my_ftp.h"

t_req	gl_req[] = {
  {RQ_LIST, req_list, "ls", "-lgA"},
  {RQ_GET, req_get, 0, 0},
  {RQ_PUT, req_put, 0, 0},
  {RQ_USER, req_user, 0, 0},
  {RQ_PASS, req_pass, 0, 0},
  {RQ_PWD, req_pwd, "pwd", 0},
  {RQ_CWD, req_cwd, 0, 0},
  {RQ_MKD, req_mkd, "mkdir", 0},
  {RQ_DELE, req_dele, 0, 0},
  {RQ_RMD, req_rmd, 0, 0},
  {RQ_PORT, req_port, 0, 0},
  {RQ_MODE, req_mode, 0, 0},
  {RQ_SIZE, req_size, 0, 0},
  {RQ_STAT, req_stat, 0, 0},
  {RQ_QUIT, req_quit, 0, 0},
  {0, 0, 0, 0}
};

int	req_init(t_cmd *c)
{
  int	i;

  if (!c)
    return (FALSE);
  for (i = 0; gl_req[i].req; i++)
    {
      if (!strcmp(gl_req[i].req, c->app))
	return (gl_req[i].f(c, &gl_req[i]));
    }
  return (0);
}
