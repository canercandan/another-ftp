/*
** req_rmd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 00:52:02 2008 caner candan
** Last update Sun Apr 13 20:28:51 2008 caner candan
*/

#include <unistd.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_rmd(t_cmd *c, t_req *r)
{
  r = 0;
  if (DEBUG)
    printf("req_rmd()\n");
  rmdir(c->param);
  return (0);
}
