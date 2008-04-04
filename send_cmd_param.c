/*
** send_cmd_param.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:36:01 2008 caner candan
** Last update Fri Apr  4 17:11:54 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "my_ftp.h"

int	send_cmd_param(t_cmd *t)
{
  t->cmd = 0;
  t->opt = 0;
  t->app = strtok(t->str, DELIMIT);
  t->str = NULL;
  t->param = strtok(t->str, DELIMIT);
  printf("app: %s, param: %s\n", t->app, t->param);
  if (!strcasecmp(t->app, CMD_LS) || !strcasecmp(t->app, CMD_DIR))
    {
      t->cmd = CMD_LS_APP;
      t->opt = CMD_LS_OPT;
      return (OK);
    }
  if (!strcasecmp(t->app, CMD_PWD))
    {
      t->cmd = CMD_PWD_APP;
      return (OK);
    }
  if (!strcasecmp(t->app, CMD_QUIT) || !strcasecmp(t->app, CMD_BYE))
    return (QUIT);
  if (!strcasecmp(t->app, CMD_CD))
    return (CD);
  return (SUCCESS);
}
