/*
** req_pass.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:06:18 2008 caner candan
** Last update Mon Apr 14 05:50:16 2008 caner candan
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "my_ftp.h"

int	req_pass(t_cmd *c, t_req *r)
{
  char	mesg[200];

  r = NULL;
  if (DEBUG)
    printf("req_pass()\n");
  c->f->pass = strdup(c->param);
  login_server(c);
  if (c->f->cnt == FALSE)
    {
      mesg_dump(c->f->cs, NULL, "4211");
      return (FALSE);
    }
  chdir(c->f->root);
  sprintf(mesg, MESG_USER_DIR, c->f->root);
  mesg_dump(c->f->cs, mesg, "2151");
  return (TRUE);
}
