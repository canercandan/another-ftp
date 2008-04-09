/*
** req_cwd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 21:19:33 2008 caner candan
** Last update Tue Apr  8 21:22:18 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include "my_ftp.h"

int	req_cwd(t_cmd *c, t_req *r)
{
  r = 0;
  chdir(c->param);
  return (0);
}
