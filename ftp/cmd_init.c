/*
** cmd_init.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:36:01 2008 caner candan
** Last update Tue Apr  8 17:54:31 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_ftp.h"

t_cmd	*cmd_init(char *s)
{
  t_cmd	*t;

  t = malloc(sizeof(*t));
  t->app = strtok(s, DELIMIT);
  s = NULL;
  t->param = strtok(s, DELIMIT);
  if (!t->app)
    return (0);
  printf("app: %s, param: %s\n", t->app, t->param);
  return (t);
}
