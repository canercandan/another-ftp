/*
** cmd_init.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:36:01 2008 caner candan
** Last update Sun Apr 13 22:25:06 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_ftp.h"

int	cmd_init(t_cmd *c, t_ftp *f, char *s)
{
  if (DEBUG)
    printf("cmd_init()\n");
  c->f = f;
  c->app = NULL;
  c->param = NULL;
  c->param2 = NULL;
  c->app = strtok(s, DELIMIT);
  s = NULL;
  c->param = strtok(s, DELIMIT);
  s = NULL;
  c->param2 = strtok(s, DELIMIT);
  if (!c->app)
    return (FALSE);
  if (DEBUG)
    printf("app: %s, param: %s, param2: %s\n",
	   c->app, c->param, c->param2);
  return (TRUE);
}
