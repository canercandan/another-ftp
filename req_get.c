/*
** req_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:17:32 2008 caner candan
** Last update Thu Apr 10 19:58:22 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "my_ftp.h"

int	req_get(t_cmd *c, t_req *r)
{
  char	buf[4096];
  int	fd;
  int	nbr;

  r = NULL;
  printf("req_get()\n");
  fd = open(c->param, O_RDONLY);
  while ((nbr = read(fd, buf, sizeof(buf))) > 0)
    {
      xsend(c->f->cs, buf, (void *) nbr, 0);
      write(1, buf, nbr);
    }
  xsend(c->f->cs, "\n", (void *) 2, 0);
  write(1, "\n", 2);
  close(fd);
  return (0);
}
