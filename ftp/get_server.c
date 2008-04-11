/*
** get_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 22:25:28 2008 caner candan
** Last update Fri Apr 11 11:09:03 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include "my_ftp.h"

void	get_server(t_ftp *f)
{
  char	buf[1024];
  int	nbr;

  if (DEBUG)
    printf("get_server()\n");
  while ((nbr = xrecv(f->s, buf, sizeof(buf), 0)) > 0)
    write(1, buf, nbr);
  xsend(f->cs, "CouCou\n", (void *) 8, 0);
  close(f->cs);
}
