/*
** req_init.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:46:58 2008 caner candan
** Last update Tue Apr  8 18:27:52 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include "my_ftp.h"

t_req	gl_req[] = {
  {"LIST", req_list, "ls", "-l"},
  {"GET", req_get, 0, 0},
  {"PUT", req_put, 0, 0},
  {"USER", req_user, 0, 0},
  {"PASS", req_pass, 0, 0},
  {"PWD", req_pwd, "pwd", 0},
  {"QUIT", req_quit, 0, 0},
  {0, 0, 0, 0}
};

int	req_init(t_cmd *cmd)
{
  int	i;

  if (!cmd)
    return (FALSE);
  for (i = 0; gl_req[i].req; i++)
    {
      if (!strcmp(gl_req[i].req, cmd->app))
	return (gl_req[i].f(cmd, &gl_req[i]));
    }
  return (0);
}
