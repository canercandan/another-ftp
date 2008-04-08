/*
** cmd_client.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 20:31:59 2008 caner candan
** Last update Tue Apr  8 20:45:03 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

int	cmd_client(t_cmd *cmd, t_req *req)
{
  int	pid;
  int	signal;

  if (!(pid = fork()))
    {
      dup2(cmd->cs, STDOUT_FILENO);
      dup2(cmd->cs, STDERR_FILENO);
      cmd_exec(cmd, req);
      exit(0);
    }
  wait(&signal);
}
