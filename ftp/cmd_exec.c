/*
** cmd_exec.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 20:35:40 2008 caner candan
** Last update Tue Apr  8 20:37:11 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "my_ftp.h"

void	cmd_exec(t_cmd *cmd, t_req *req)
{
  printf("cmd: %s, opt: %s, param: %s\n",
	 req->cmd, req->opt, cmd->param);
  execlp(req->cmd, req->cmd, req->opt, cmd->param, (char *) 0);
}
