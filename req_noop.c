/*
** req_noop.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:55:50 2008 caner candan
** Last update Sun Apr 13 20:27:44 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_noop(t_cmd *c, t_req *r)
{
  r = 0;
  if (DEBUG)
    printf("req_noop()\n");
  xsend(c->f->cs, "", (void *) 1, 0);
  return (0);
}
