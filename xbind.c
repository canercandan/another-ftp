/*
** xbind.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:27:50 2008 caner candan
** Last update Fri Apr  4 17:24:21 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

int	xbind(int s, const struct sockaddr *addr, socklen_t addrlen)
{
  int	rc;

  if ((rc = bind(s, addr, addrlen)) < 0)
    {
      fprintf(stderr, "server - error with bind()\n");
      close(s);
      exit(FAILED);
    }
  return (rc);
}
