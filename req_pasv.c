/*
** req_pasv.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 11:18:05 2008 caner candan
** Last update Sun Apr 13 20:28:04 2008 caner candan
*/

#include <stdio.h>
#include "my_ftp.h"

int	req_pasv(t_cmd *c, t_req *r)
{
  char	mesg[200];

  r = NULL;
  if (DEBUG)
    printf("req_pasv()\n");
  sprintf(mesg, "pasv");
  mesg_dump(c->f->cs, mesg, "2201");
  return (0);
}
