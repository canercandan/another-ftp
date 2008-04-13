/*
** mesg_start.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 18:39:47 2008 caner candan
** Last update Sun Apr 13 17:17:50 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

void	mesg_start(t_ftp *f)
{
  char	mesg[200];

  printf("mesg_start()\n");
  //mesg_dump(f->cs, NULL, "1201");
  sprintf(mesg, MESG_WELCOME);
  mesg_dump(f->cs, mesg, "2201");
  sprintf(mesg, MESG_SLOTS, 0, 0);
  mesg_dump(f->cs, mesg, "2200");
  sprintf(mesg, MESG_TIME, "00h00", f->port);
  mesg_dump(f->cs, mesg, "2200");
  sprintf(mesg, MESG_TIMEOUT, 0);
  mesg_dump(f->cs, mesg, "2201");
  //mesg_dump(f->cs, NULL, "2201");
  //mesg_dump(f->cs, NULL, "4211");
}
