/*
** req_mkd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 21:22:34 2008 caner candan
** Last update Sun Apr 13 20:27:25 2008 caner candan
*/

#include <sys/stat.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_mkd(t_cmd *c, t_req *r)
{
  r = 0;
  if (DEBUG)
    printf("req_mkd()\n");
  mkdir(c->param, 0755);
  return (0);
}
