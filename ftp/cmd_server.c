/*
** cmd_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:58:08 2008 caner candan
** Last update Tue Apr  8 20:45:24 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include "my_ftp.h"

void	cmd_server(t_cmd *cmd, t_req *req)
{
  int	pid;
  int	signal;

  if (!(pid = fork()))
    {
      write(1, PROMPT_RES, strlen(PROMPT_RES));
      cmd_exec(cmd, req);
      exit(0);
    }
  wait(&signal);
}
