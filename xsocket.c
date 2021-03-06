/*
** xsocket.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:24:30 2008 caner candan
** Last update Tue Apr  8 15:24:40 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

int	xsocket(int domain, int type, int protocol)
{
  int	s;

  if ((s = socket(domain, type, protocol)) < 0)
    {
      fprintf(stderr, "server - error with socket()\n");
      close(s);
      exit(FALSE);
    }
  return (s);
}
