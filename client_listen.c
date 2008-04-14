/*
** client_listen.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 17:47:18 2008 caner candan
** Last update Mon Apr 14 05:46:51 2008 caner candan
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "my_ftp.h"

void	client_listen(t_ftp *f)
{
  char	buf[1024];
  int	nbr;

  if (DEBUG)
    printf("client_listen()\n");
  while (42)
    {
      bzero(buf, sizeof(buf));
      if ((nbr = (int) xrecv(f->s, buf, (void *) sizeof(buf), 0)) > 0)
	{
	  if (is_get(f, buf) == FALSE)
	    write(1, buf, nbr);
	}
      else
	break;
      prompt();
    }
  printf("connection stopped\n");
  exit(TRUE);
}
