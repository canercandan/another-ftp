/*
** send_cmd_param.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:36:01 2008 caner candan
** Last update Thu Apr  3 18:43:03 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <strings.h>
#include "my_ftp.h"

void	send_cmd_param(char *str, char **cmd, char **opt)
{
  *cmd = 0;
  *opt = 0;
  if (!strcasecmp(str, CMD_LS) || !strcasecmp(str, CMD_DIR))
    {
      *cmd = CMD_LS_APP;
      *opt = CMD_LS_OPT;
    }
  else if (!strcasecmp(str, CMD_PWD))
    *cmd = CMD_PWD_APP;
  else if (!strcasecmp(str, CMD_QUIT))
    exit(-1);
}
