/*
** get_client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 17:36:14 2008 caner candan
** Last update Mon Apr 14 04:58:46 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_ftp.h"

void	get_client(t_ftp *f)
{
  t_cmd	c;
  char	buf[1024];
  int	nbr;
  int	pid;

  if (DEBUG)
    printf("get_client()\n");
  if (!(pid = fork()))
    {
      f->cnt = FALSE;
      bzero(buf, sizeof(buf));
      mesg_start(f);
      while ((nbr = (int) xrecv(f->cs, buf, (void *) sizeof(buf), 0)) > 0)
	{
	  if (cmd_init(&c, f, trim(buf)) == TRUE)
	    if (req_init(&c) == RET_QUIT)
	      break;
	  bzero(buf, sizeof(buf));
	}
      close(f->cs);
      exit(0);
    }
}
