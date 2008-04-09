/*
** cmd_init.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:36:01 2008 caner candan
** Last update Wed Apr  9 16:01:07 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_ftp.h"

int	cmd_init(t_cmd *c, t_ftp *f, char *s)
{
  c->f = f;
  c->app = NULL;
  c->param = NULL;
  c->app = strtok(s, DELIMIT);
  s = NULL;
  c->param = strtok(s, DELIMIT);
  if (!c->app)
    return (0);
  printf("app: %s, param: %s\n", c->app, c->param);
  return (1);
}
