/*
** req_user.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:05:37 2008 caner candan
** Last update Sat Apr 12 13:24:36 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_user(t_cmd *c, t_req *r)
{
  char	mesg[200];

  r = NULL;
  printf("req_user()\n");
  sprintf(mesg, MESG_USER_OK, c->param);
  mesg_dump(c->f->cs, mesg, "3311");
  return (0);
}
