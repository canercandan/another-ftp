/*
** cmd_client.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 20:31:59 2008 caner candan
** Last update Fri Apr 11 19:28:07 2008 caner candan
*/

#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

void	cmd_client(t_cmd *c, t_req *r)
{
  int	pid;
  int	signal;

  if (!(pid = fork()))
    {
      dup2(c->f->cs, STDOUT_FILENO);
      dup2(c->f->cs, STDERR_FILENO);
      cmd_exec(c, r);
      exit(0);
    }
  wait(&signal);
}
