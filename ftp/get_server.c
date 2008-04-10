/*
** get_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 22:25:28 2008 caner candan
** Last update Thu Apr 10 09:31:13 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include "my_ftp.h"

void	get_server(t_ftp *f)
{
  char	buf[1024];

  if (DEBUG)
    printf("get_server()\n");
  xsend(f->cs, "CouCou\n", 8, 0);
  close(f->cs);
}
