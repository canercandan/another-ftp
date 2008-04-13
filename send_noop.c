/*
** send_noop.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 20:19:36 2008 caner candan
** Last update Sun Apr 13 20:20:37 2008 caner candan
*/

#include <string.h>
#include "my_ftp.h"

int	send_noop(t_ftp *f)
{
  xsend(f->s, RQ_NOOP, (void *) strlen(RQ_NOOP), 0);
  return (0);
}
