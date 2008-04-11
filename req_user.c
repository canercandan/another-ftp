/*
** req_user.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:05:37 2008 caner candan
** Last update Wed Apr  9 21:26:13 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_user(t_cmd *c, t_req *r)
{
  t_msg	m;

  r = NULL;
  printf("req_user()\n");
  m.cde_x = '3';
  m.cde_y = '3';
  m.cde_z = '1';
  m.is_send = MESG_SEND;
  sprintf(m.mesg, MESG_USER_OK, c->param);
  mesg_dump(c->f->cs, &m);
  return (0);
}
