/*
** get_client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 17:36:14 2008 caner candan
** Last update Tue Apr  8 20:27:54 2008 caner candan
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
  t_cmd	cmd;
  char	buf[100];
  int	nbr;
  int	pid;

  if (!(pid = fork()))
    {
      bzero(buf, sizeof(buf));
      xsend(cs, PROMPT, 5, 0);
      while ((nbr = xrecv(cs, buf, sizeof(buf), 0)) > 0)
	{
	  if (cmd_init(&cmd, cs, trim(buf)))
	    if (req_init(&cmd) == RET_QUIT)
	      break;
	  xsend(cs, PROMPT, 5, 0);
	  bzero(buf, sizeof(buf));
	}
      close(cs);
      exit(0);
    }
  return (cs);
}
