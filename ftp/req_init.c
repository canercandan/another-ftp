/*
** req_init.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:46:58 2008 caner candan
** Last update Tue Apr  8 15:56:32 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include "my_ftp.h"

t_req	gl_req[] = {
  {"LIST", req_list},
  {"GET", req_get},
  {"PUT", req_put},
  {"PWD", req_pwd},
  {"QUIT", req_quit},
  {0, 0}
};

int	req_init(t_cmd *cmd)
{
  int	i;

  if (!cmd)
    return (FALSE);
  for (i = 0; gl_req[i].req; i++)
    if (!strcmp(gl_req[i].req, cmd->app))
      return (gl_req[i].f(cmd));
  return (0);
}
