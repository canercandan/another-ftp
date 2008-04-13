/*
** req_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:17:32 2008 caner candan
** Last update Mon Apr 14 00:08:42 2008 caner candan
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "my_ftp.h"

int	req_get(t_cmd *c, t_req *r)
{
  r = NULL;
  c = NULL;
  if (DEBUG)
    printf("req_get()\n");
  return (TRUE);
}
