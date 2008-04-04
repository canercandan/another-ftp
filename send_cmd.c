/*
** send_cmd.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 12:42:00 2008 caner candan
** Last update Fri Apr  4 16:38:22 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdio.h>
#include "my_ftp.h"

int	send_cmd(char *str, int cs)
{
  t_cmd	t;
  int	rc;

  if (!str || !str[0])
    return (-1);
  t.str = str;
  rc = send_cmd_param(&t);
  if (rc == CODE_QUIT)
    return (CODE_QUIT);
  if (rc == CODE_CD)
    {
      chdir(t.param);
      return (CODE_CD);
    }
  if (rc)
    {
      printf(PROMPT_CMD, t.str);
      send_cmd_client(cs, &t);
      send_cmd_server(&t);
    }
  return (0);
}
