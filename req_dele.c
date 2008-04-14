/*
** req_dele.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 21:25:50 2008 caner candan
** Last update Mon Apr 14 06:03:41 2008 caner candan
*/

#include <unistd.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_dele(t_cmd *c, t_req *r)
{
  r = 0;
  if (DEBUG)
    printf("req_dele()\n");
  unlink(c->param);
  mesg_dump(c->f->cs, NULL, "2501");
  return (0);
}
