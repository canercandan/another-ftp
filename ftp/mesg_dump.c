/*
** mesg_dump.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 19:47:07 2008 caner candan
** Last update Wed Apr  9 21:20:56 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "my_ftp.h"

void	mesg_dump(int cs, t_msg *m)
{
  char	buf[200];

  printf("mesg_dump()\n");
  bzero(buf, sizeof(buf));
  sprintf(buf, MESG_CODE, m->cde_x, m->cde_y,
	  m->cde_z, m->is_send, m->mesg);
  xsend(cs, buf, strlen(buf), 0);
}
