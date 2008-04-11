/*
** req_eprt.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 11:18:05 2008 caner candan
** Last update Wed Apr  9 21:45:36 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_eprt(t_cmd *c, t_req *r)
{
  t_msg	m;

  r = NULL;
  printf("req_eprt()\n");
  m.cde_x = '2';
  m.cde_y = '2';
  m.cde_z = '6';
  m.is_send = MESG_SEND;
  sprintf(m.mesg, "eprt");
  mesg_dump(c->f->cs, &m);
  return (0);
}
