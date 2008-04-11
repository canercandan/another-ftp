/*
** req_epsv.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 11:18:05 2008 caner candan
** Last update Fri Apr 11 19:26:07 2008 caner candan
*/

#include <stdio.h>
#include "my_ftp.h"

int	req_epsv(t_cmd *c, t_req *r)
{
  t_msg	m;

  r = NULL;
  printf("req_epsv()\n");
  m.cde_x = '2';
  m.cde_y = '2';
  m.cde_z = '9';
  m.is_send = MESG_SEND;
  sprintf(m.mesg, "Extended Passive mode OK (|||28246|)");
  mesg_dump(c->f->cs, &m);
  return (0);
}
