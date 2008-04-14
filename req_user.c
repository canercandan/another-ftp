/*
** req_user.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:05:37 2008 caner candan
** Last update Mon Apr 14 04:33:26 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_user(t_cmd *c, t_req *r)
{
  char	mesg[200];

  r = NULL;
  if (DEBUG)
    printf("req_user()\n");
  c->f->user = strdup(c->param);
  sprintf(mesg, MESG_USER_OK, c->param);
  mesg_dump(c->f->cs, mesg, "3311");
  return (0);
}
