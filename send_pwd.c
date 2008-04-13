/*
** send_pwd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 18:17:59 2008 caner candan
** Last update Sun Apr 13 19:28:36 2008 caner candan
*/

#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

int	send_pwd(t_cmd *c, t_snd *s)
{
  if (DEBUG)
    printf("send_pwd()\n");
  xsend(c->f->s, s->req, (void *) strlen(s->req), 0);
  return (0);
}
