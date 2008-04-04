/*
** send_cmd_client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 18:18:59 2008 caner candan
** Last update Fri Apr  4 16:25:24 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

void	send_cmd_client(int cs, t_cmd *t)
{
  int	pid;
  int	signal;

  if (!(pid = fork()) && t->cmd)
    {
      dup2(cs, STDOUT_FILENO);
      dup2(cs, STDERR_FILENO);
      execlp(t->cmd, t->cmd, t->opt, t->param, (char *) 0);
      exit(0);
    }
  wait(&signal);
}
