/*
** xconnect.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:53:56 2008 caner candan
** Last update Fri Apr  4 17:24:29 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

int	xconnect(int s, const struct sockaddr *name, socklen_t namelen)
{
  int	rc;

  if ((rc = connect(s, name, namelen)) < 0)
    {
      fprintf(stderr, "Error with connect()\n");
      close(s);
      exit(FAILED);
    }
  return (s);
}
