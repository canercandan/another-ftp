/*
** mesg_dump.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 19:47:07 2008 caner candan
** Last update Wed Apr  9 20:13:26 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

void	mesg_dump(t_cmd *c)
{
  char	buf[200];

  printf("mesg_dump()\n");
  sprintf(buf, MESG_CODE,
	  c->m->cde_x, c->m->cde_y, c->m->cde_z, c->m->mesg);
  xsend(c->f->cs, buf, strlen(buf), 0);
}
