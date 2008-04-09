/*
** req_mkd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 21:22:34 2008 caner candan
** Last update Wed Apr  9 01:35:56 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_mkd(t_cmd *c, t_req *r)
{
  r = 0;
  printf("req_mkd()\n");
  mkdir(c->param, 0755);
  return (0);
}
