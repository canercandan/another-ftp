/*
** cmd_exec.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 20:35:40 2008 caner candan
** Last update Fri Apr 11 19:28:18 2008 caner candan
*/

#include <unistd.h>
#include <stdio.h>
#include "my_ftp.h"

void	cmd_exec(t_cmd *c, t_req *r)
{
  printf("cmd: %s, opt: %s, param: %s\n",
	 r->cmd, r->opt, c->param);
  execlp(r->cmd, r->cmd, r->opt, c->param, (char *) 0);
}
