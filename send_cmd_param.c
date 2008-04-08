/*
** send_cmd_param.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:36:01 2008 caner candan
** Last update Tue Apr  8 08:23:36 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "my_ftp.h"
#include "requests.h"

int	send_cmd_param(t_cmd *t)
{
  t->cmd = 0;
  t->opt = 0;
  t->app = strtok(t->str, DELIMIT);
  t->str = NULL;
  t->param = strtok(t->str, DELIMIT);
  printf("app: %s, param: %s\n", t->app, t->param);
  if (!strcasecmp(t->app, LIST))
    {
      t->cmd = LIST_APP;
      t->opt = LIST_OPT;
      return (RET_OK);
    }
  if (!strcasecmp(t->app, PWD))
    {
      t->cmd = PWD_APP;
      return (RET_OK);
    }
  if (!strcasecmp(t->app, QUIT))
    return (RET_QUIT);
  if (!strcasecmp(t->app, CWD))
    return (RET_CD);
  if (!strcasecmp(t->app, GET))
    return (RET_GET);
  if (!strcasecmp(t->app, PUT))
    return (RET_PUT);
  return (SUCCESS);
}
