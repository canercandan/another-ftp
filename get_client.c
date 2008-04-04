/*
** get_client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 17:36:14 2008 caner candan
** Last update Fri Apr  4 17:15:04 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include "my_ftp.h"

int	get_client(int cs)
{
  char	buf[100];
  int	nbr;
  int	pid;
  int	rc;

  if (!(pid = fork()))
    {
      bzero(buf, sizeof(buf));
      xsend(cs, "ftp>", 4, 0);
      while ((nbr = xrecv(cs, buf, sizeof(buf), 0)) > 0)
	{
	  rc = send_cmd(trim(buf), cs);
	  if (rc == QUIT)
	    break;
	  xsend(cs, "ftp>", 4, 0);
	  bzero(buf, sizeof(buf));
	}
      close(cs);
      exit(SUCCESS);
    }
  return (cs);
}
