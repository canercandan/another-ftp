/*
** send_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 18:17:59 2008 caner candan
** Last update Mon Apr 14 03:19:30 2008 caner candan
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_ftp.h"

int	send_get(t_cmd *c, t_snd *s)
{
  char	buf[1024];

  if (DEBUG)
    printf("send_get()\n");
  sprintf(buf, SD_FMT, s->req, c->param, "");
  xsend(c->f->s, buf, (void *) strlen(buf), 0);
  return (TRUE);
}
