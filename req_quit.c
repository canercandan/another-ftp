/*
** req_quit.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:17:32 2008 caner candan
** Last update Fri Apr 11 19:27:03 2008 caner candan
*/

#include <stdio.h>
#include "my_ftp.h"

int	req_quit(t_cmd *c, t_req *r)
{
  c = NULL;
  r = NULL;
  printf("req_quit()\n");
  return (RET_QUIT);
}
