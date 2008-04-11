/*
** mesg_start.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 18:39:47 2008 caner candan
** Last update Wed Apr  9 21:28:06 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

void	mesg_start(t_ftp *f)
{
  t_msg	m;

  printf("mesg_start()\n");
  m.cde_x = '2';
  m.cde_y = '2';
  m.cde_z = '0';
  m.is_send = MESG_NOTSEND;
  sprintf(m.mesg, MESG_WELCOME);
  mesg_dump(f->cs, &m);
  sprintf(m.mesg, MESG_SLOTS, 0, 0);
  mesg_dump(f->cs, &m);
  sprintf(m.mesg, MESG_TIME, "00h00", f->port);
  mesg_dump(f->cs, &m);
  sprintf(m.mesg, MESG_TIMEOUT, 0);
  m.is_send = MESG_SEND;
  mesg_dump(f->cs, &m);
}
