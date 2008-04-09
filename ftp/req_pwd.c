/*
** req_pwd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:55:50 2008 caner candan
** Last update Tue Apr  8 22:26:39 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_pwd(t_cmd *c, t_req *r)
{
  printf("req_pwd()\n");
  cmd_server(c, r);
  cmd_client(c, r);
  return (0);
}
