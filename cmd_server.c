/*
** cmd_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:58:08 2008 caner candan
** Last update Fri Apr 11 19:28:36 2008 caner candan
*/

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "my_ftp.h"

void	cmd_server(t_cmd *c, t_req *r)
{
  int	pid;
  int	signal;

  if (!(pid = fork()))
    {
      write(1, PROMPT_RES, strlen(PROMPT_RES));
      cmd_exec(c, r);
      exit(0);
    }
  wait(&signal);
}
