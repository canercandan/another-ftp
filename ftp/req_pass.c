/*
** req_pass.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:06:18 2008 caner candan
** Last update Wed Apr  9 20:11:08 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

int	req_pass(t_cmd *c, t_req *r)
{
  r = NULL;
  printf("req_pass()\n");
  sprintf(c->m->mesg, MESG_USER_GRP, "user", "group1", "group2");
  xsend(c->f->cs, c->m->mesg, strlen(c->m->mesg), 0);
  sprintf(c->m->mesg, MESG_USER_DIR);
  c->m->cde_x = '2';
  c->m->cde_y = '3';
  c->m->cde_z = '0';
  return (0);
}
