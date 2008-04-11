/*
** req_pass.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:06:18 2008 caner candan
** Last update Wed Apr  9 21:27:41 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

int	req_pass(t_cmd *c, t_req *r)
{
  t_msg	m;

  r = NULL;
  printf("req_pass()\n");
  m.cde_x = '2';
  m.cde_y = '3';
  m.cde_z = '0';
  m.is_send = MESG_NOTSEND;
  sprintf(m.mesg, MESG_USER_GRP, "user", "group1", "group2");
  mesg_dump(c->f->cs, &m);
  m.is_send = MESG_SEND;
  sprintf(m.mesg, MESG_USER_DIR);
  mesg_dump(c->f->cs, &m);
  return (0);
}
