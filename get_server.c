/*
** get_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 22:25:28 2008 caner candan
** Last update Sun Apr 13 16:38:18 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "my_ftp.h"

void	get_server(t_ftp *f)
{
  char	*s;
  char	cmd[254];
  char	buf[1024];
  int	nbr;
  int	pid;

  if (DEBUG)
    printf("get_server()\n");
  nbr = recv(f->cs, buf, sizeof(buf), 0);
  write(1, buf, nbr);
  prompt();
  while (42)
    {
      if ((s = get_next_line(0)))
	send(f->cs, s, strlen(s), 0);
      if ((nbr = recv(f->cs, buf, sizeof(buf), 0)) > 0)
	write(1, buf, nbr);
      prompt();
    }
}
