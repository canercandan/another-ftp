/*
** cmd_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:58:08 2008 caner candan
** Last update Tue Apr  8 16:02:55 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

void	cmd_server(t_cmd *cmd)
{
  int	pid;
  int	signal;

  if (!(pid = fork()))
    {
      write(1, PROMPT_RES, strlen(PROMPT_RES));
      execlp(cmd->app, cmd->app, cmd->param, (char *) 0);
      exit(0);
    }
  wait(&signal);
}
