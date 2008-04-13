/*
** req_syst.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 11:18:05 2008 caner candan
** Last update Sat Apr 12 13:37:45 2008 caner candan
*/

#include <stdio.h>
#include "my_ftp.h"

int	req_syst(t_cmd *c, t_req *r)
{
  char	mesg[200];

  r = NULL;
  printf("req_syst()\n");
  sprintf(mesg, "syst");
  mesg_dump(c->f->cs, mesg, "2151");
  return (0);
}
