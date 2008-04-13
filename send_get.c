/*
** send_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 18:17:59 2008 caner candan
** Last update Mon Apr 14 00:08:02 2008 caner candan
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_ftp.h"

int	send_get(t_cmd *c, t_snd *s)
{
  char	buf[1024];
  int	nbr;
  int	fd;
  int	len;
  int	i;

  s = NULL;
  if (DEBUG)
    printf("send_get()\n");
  if ((fd = open(c->param, O_WRONLY | O_CREAT, 0644)) < 0)
    {
      close(fd);
      return (FALSE);
    }
  len = atoi(c->param2);
  for (i = 0; i < len; i += sizeof(buf))
    if ((nbr = (int) xrecv(c->f->s, buf, (void *) sizeof(buf), 0)) > 0)
      write(fd, buf, nbr);
  mesg_dump(c->f->s, NULL, "2201");
  close(fd);
  return (TRUE);
}
