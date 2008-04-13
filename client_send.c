/*
** client_send.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 17:49:34 2008 caner candan
** Last update Sun Apr 13 23:07:31 2008 caner candan
*/

#include <unistd.h>
#include <strings.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

void	client_send(t_ftp *f)
{
  char	buf[1024];
  int	nbr;
  int	rc;

  if (DEBUG)
    printf("client_send()\n");
  while (42)
    {
      bzero(buf, sizeof(buf));
      if ((nbr = read(0, buf, sizeof(buf))) > 0)
	{
	  rc = send_init(f, buf);
	  if (rc == FALSE)
	    printf(ERR_INVALID);
	  if (rc != TRUE)
	    send_noop(f);
	}
      else
	break;
    }
}
