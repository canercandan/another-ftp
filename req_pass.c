/*
** req_pass.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:06:18 2008 caner candan
** Last update Sat Apr 12 13:11:57 2008 caner candan
*/

#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

int	req_pass(t_cmd *c, t_req *r)
{
  char	mesg[200];

  r = NULL;
  printf("req_pass()\n");
  sprintf(mesg, MESG_USER_GRP, "user", "group1", "group2");
  mesg_dump(c->f->cs, mesg, "2150");
  sprintf(mesg, MESG_USER_DIR);
  mesg_dump(c->f->cs, mesg, "2151");
  return (0);
}
