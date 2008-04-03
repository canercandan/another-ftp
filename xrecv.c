/*
** xrecv.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:48:28 2008 caner candan
** Last update Thu Apr  3 10:22:35 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

ssize_t	xrecv(int s, void *buf, size_t len, int flags)
{
  int	rc;

  if ((rc = recv(s, buf, len, flags)) < 0)
    {
      fprintf(stderr, "Error with recv()\n");
      close(s);
      exit(-1);
    }
  return (rc);
}
