/*
** req_user.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:05:37 2008 caner candan
** Last update Wed Apr  9 20:07:35 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_user(t_cmd *c, t_req *r)
{
  r = NULL;
  printf("req_user()\n");
  sprintf(c->m->mesg, MESG_USER_OK, c->param);
  c->m->cde_x = '2';
  c->m->cde_y = '2';
  c->m->cde_z = '0';
  return (0);
}
