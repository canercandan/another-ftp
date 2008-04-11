/*
** get_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 22:25:28 2008 caner candan
** Last update Fri Apr 11 20:12:24 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_ftp.h"

void	get_server(t_ftp *f)
{
  char	buf[10];
  int	nbr;

  if (DEBUG)
    printf("get_server()\n");
  prompt();
  while ((nbr = read(0, buf, sizeof(buf))) > 0)
    {
      xsend(f->s, buf, (void *) nbr, 0);
      while ((nbr = read(f->s, buf, sizeof(buf))) > 0)
	{
	  write(1, buf, nbr);
	  printf("nbr: %d\n", nbr);
	}
      prompt();
    }
}
