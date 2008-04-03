/*
** send_cmd_client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:18:59 2008 caner candan
** Last update Thu Apr  3 18:54:42 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

void	send_cmd_client(int cs, char *cmd, char *opt)
{
  int	pid;

  if (!(pid = fork()) && cmd)
    {
      dup2(cs, STDOUT_FILENO);
      dup2(cs, STDERR_FILENO);
      execlp(cmd, cmd, opt, (char *) 0);
      exit(0);
    }
}
