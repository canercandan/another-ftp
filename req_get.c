/*
** req_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:17:32 2008 caner candan
** Last update Mon Apr 14 03:19:17 2008 caner candan
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_ftp.h"

int		req_get(t_cmd *c, t_req *r)
{
  struct stat	sb;
  char		buf[1024];
  char		*content;
  int		nbr;
  int		fd;

  if (DEBUG)
    printf("req_get()\n");
  if ((fd = open(c->param, O_RDONLY)) < 0)
    {
      close(fd);
      return (FALSE);
    }
  fstat(fd, &sb);
  sprintf(buf, "%s %s %d\r\n", r->req, c->param, (int) sb.st_size);
  xsend(c->f->cs, buf, (void *) strlen(buf), 0);
  content = malloc(sb.st_size);
  while ((nbr = read(fd, buf, sizeof(buf))) > 0)
    strncat(content, buf, nbr);
  xsend(c->f->cs, content, (void *) (int) sb.st_size, 0);
  /*free(content);*/
  close(fd);
  return (TRUE);
}
