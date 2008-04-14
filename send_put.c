/*
** send_put.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 18:17:59 2008 caner candan
** Last update Mon Apr 14 02:33:29 2008 caner candan
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_ftp.h"

int		send_put(t_cmd *c, t_snd *s)
{
  struct stat	sb;
  char		buf[1024];
  char		*content;
  int		nbr;
  int		fd;

  if (DEBUG)
    printf("send_put()\n");
  if ((fd = open(c->param, O_RDONLY)) < 0)
    {
      close(fd);
      return (FALSE);
    }
  fstat(fd, &sb);
  sprintf(buf, "%s %s %d\r\n", s->req, c->param, (int) sb.st_size);
  xsend(c->f->s, buf, (void *) strlen(buf), 0);
  content = malloc(sb.st_size);
  while ((nbr = read(fd, buf, sizeof(buf))) > 0)
    strncat(content, buf, nbr);
  xsend(c->f->s, content, (void *) (int) sb.st_size, 0);
  /*free(content);*/
  close(fd);
  return (TRUE);
}
