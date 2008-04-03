/*
** send_cmd.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 12:42:00 2008 caner candan
** Last update Thu Apr  3 18:38:17 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_ftp.h"

int	send_cmd(char *str, int cs)
{
  char	*cmd;
  char	*opt;

  if (!str)
    return (-1);
  send_cmd_param(str, &cmd, &opt);
  printf(PROMPT_CMD, str);
  send_cmd_client(cs, cmd, opt);
  send_cmd_server(cmd, opt);
  return (0);
}
