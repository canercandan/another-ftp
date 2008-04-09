/*
** mesg_start.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 18:39:47 2008 caner candan
** Last update Wed Apr  9 20:12:28 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

void	mesg_start(t_ftp *f)
{
  char	buf[200];

  printf("mesg_start()\n");
  sprintf(buf, MESG_WELCOME);
  send(f->cs, buf, strlen(buf), 0);
  sprintf(buf, MESG_SLOTS, 0, 0);
  send(f->cs, buf, strlen(buf), 0);
  sprintf(buf, MESG_TIME, "00h00", f->port);
  send(f->cs, buf, strlen(buf), 0);
  sprintf(buf, MESG_TIMEOUT, 0);
  send(f->cs, buf, strlen(buf), 0);
}
