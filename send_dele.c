/*
** send_dele.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 18:17:59 2008 caner candan
** Last update Mon Apr 14 06:09:24 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	send_dele(t_cmd *c, t_snd *s)
{
  char	buf[200];

  if (DEBUG)
    printf("send_dele()\n");
  sprintf(buf, SD_FMT, s->req, c->param, "");
  xsend(c->f->s, buf, (void *) strlen(buf), 0);
  return (0);
}
