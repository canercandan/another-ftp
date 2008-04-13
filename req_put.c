/*
** req_put.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:17:32 2008 caner candan
** Last update Mon Apr 14 00:09:53 2008 caner candan
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_ftp.h"

int	req_put(t_cmd *c, t_req *r)
{
  char	buf[1024];
  int	nbr;
  int	fd;
  int	len;
  int	i;

  r = NULL;
  if (DEBUG)
    printf("req_put()\n");
  if ((fd = open(c->param, O_WRONLY | O_CREAT, 0644)) < 0)
    {
      close(fd);
      return (FALSE);
    }
  len = atoi(c->param2);
  for (i = 0; i < len; i += sizeof(buf))
    if ((nbr = (int) xrecv(c->f->cs, buf, (void *) sizeof(buf), 0)) > 0)
      write(fd, buf, nbr);
  mesg_dump(c->f->cs, NULL, "2201");
  close(fd);
  return (TRUE);
}
