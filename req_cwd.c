/*
** req_cwd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 21:19:33 2008 caner candan
** Last update Sun Apr 13 21:04:03 2008 caner candan
*/

#include <unistd.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_cwd(t_cmd *c, t_req *r)
{
  r = 0;
  if (DEBUG)
    printf("req_cwd()\n");
  if (control_path(c->f, c->param) == FALSE)
    return (FALSE);
  chdir(c->param);
  mesg_dump(c->f->cs, NULL, "2501");
  return (TRUE);
}
