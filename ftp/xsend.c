/*
** xsend.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:51:31 2008 caner candan
** Last update Tue Apr  8 15:25:53 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

ssize_t	xsend(int s, const void *msg, size_t len, int flags)
{
  int	rc;

  if ((rc = send(s, msg, len, flags)) < 0)
    {
      fprintf(stderr, "Error with send()\n");
      close(s);
      exit(FALSE);
    }
  return (rc);
}
