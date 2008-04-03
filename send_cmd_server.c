/*
** send_cmd_server.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:21:18 2008 caner candan
** Last update Thu Apr  3 18:42:18 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "my_ftp.h"

void	send_cmd_server(char *cmd, char *opt)
{
  int	pid;

  if (!(pid = fork()) && cmd)
    {
      write(1, PROMPT_RES, strlen(PROMPT_RES));
      execlp(cmd, cmd, opt, (char *) 0);
      exit(0);
    }
}
