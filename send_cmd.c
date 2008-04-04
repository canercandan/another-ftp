/*
** send_cmd.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 12:42:00 2008 caner candan
** Last update Fri Apr  4 17:17:07 2008 caner candan
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
    return (FAILED);
  t.str = str;
  rc = send_cmd_param(&t);
  if (rc == QUIT)
    return (QUIT);
  if (rc == CD)
    {
      chdir(t.param);
      return (CD);
    }
  if (rc > 0)
    {
      printf(PROMPT_CMD, t.app);
      send_cmd_client(cs, &t);
      send_cmd_server(&t);
    }
  return (SUCCESS);
}
