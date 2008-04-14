/*
** send_list.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 18:17:59 2008 caner candan
** Last update Mon Apr 14 03:28:15 2008 caner candan
*/

#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

int	send_list(t_cmd *c, t_snd *s)
{
  char	buf[200];

  if (DEBUG)
    printf("send_list()\n");
  sprintf(buf, SD_FMT, s->req, (c->param ? c->param : ""), "");
  xsend(c->f->s, buf, (void *) strlen(buf), 0);
  return (0);
}
