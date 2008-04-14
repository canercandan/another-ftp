/*
** req_rn.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 11:02:12 2008 caner candan
** Last update Mon Apr 14 06:05:01 2008 caner candan
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_ftp.h"

int		req_rn(t_cmd *c, t_req *r)
{
  static char	*from;

  r = 0;
  if (DEBUG)
    printf("req_rn()\n");
  if (control_path(c->f, c->param) == FALSE)
    return (FALSE);
  if (!from)
    {
      if (DEBUG)
	printf("req_rn() RNFR\n");
      from = strdup(c->param);
      return (0);
    }
  if (DEBUG)
    printf("req_rn() RNTO %s -> %s\n", from, c->param);
  rename(from, c->param);
  free(from);
  from = 0;
  mesg_dump(c->f->cs, NULL, "2501");
  return (0);
}
