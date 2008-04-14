/*
** is_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Mon Apr 14 03:11:17 2008 caner candan
** Last update Mon Apr 14 03:49:57 2008 caner candan
*/

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_ftp.h"

int	is_get(t_ftp *f, char *buf)
{
  char	*s;
  t_cmd	c;
  char	line[1024];
  int	nbr;
  int	len;
  int	fd;
  int	i;

  if (DEBUG)
    printf("is_get()\n");
  s = strdup(buf);
  cmd_init(&c, f, s);
  if (strncmp(buf, RQ_GET, strlen(RQ_GET)))
    return (FALSE);
  if ((fd = open(c.param, O_WRONLY | O_CREAT, 0644)) < 0)
    return (FALSE);
  len = atoi(c.param2);
  for (i = 0; i < len; i += sizeof(line))
    if ((nbr = (int) xrecv(f->s, line, (void *) sizeof(line), 0)) > 0)
      write(fd, line, nbr);
  close(fd);
  free(s);
  return (TRUE);
}
