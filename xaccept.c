/*
** xaccept.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:37:35 2008 caner candan
** Last update Thu Apr 10 19:23:38 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_ftp.h"

int	xaccept(int s, void *addr, void *addrlen)
{
  int	sd;

  if ((sd = accept(s, (struct sockaddr *) addr,
		   (socklen_t *) addrlen)) < 0)
    {
      fprintf(stderr, "Error with accept\n");
      close(s);
      exit(FALSE);
    }
  return (sd);
}
