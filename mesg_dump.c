/*
** mesg_dump.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 19:47:07 2008 caner candan
** Last update Sun Apr 13 16:30:08 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "my_ftp.h"

void	mesg_dump(int cs, char *mesg, char *cde)
{
  char	buf[200];
  char	sendctr;

  printf("mesg_dump()\n");
  bzero(buf, sizeof(buf));
  sendctr = (cde[3] == '1' ? ' ' : '-');
  sprintf(buf, MESG_CODE, cde[0], cde[1],
	  cde[2], sendctr, mesg);
  xsend(cs, buf, (void *) strlen(buf), 0);
}
