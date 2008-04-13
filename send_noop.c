/*
** send_noop.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 20:19:36 2008 caner candan
** Last update Sun Apr 13 22:56:54 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	send_noop(t_ftp *f)
{
  char	buf[200];

  if (DEBUG)
    printf("send_noop()\n");
  sprintf(buf, SD_FMT, RQ_NOOP, "", "");
  xsend(f->s, buf, (void *) strlen(buf), 0);
  return (0);
}
