/*
** req_stat.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 00:52:02 2008 caner candan
** Last update Sat Apr 12 13:38:10 2008 caner candan
*/

#include <stdio.h>
#include "my_ftp.h"

int	req_stat(t_cmd *c, t_req *r)
{
  c = NULL;
  r = NULL;
  printf("req_stat()\n");
  mesg_dump(c->f->cs, NULL, "2111");
  return (0);
}
