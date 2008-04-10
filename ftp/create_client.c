/*
** create_client.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 22:52:15 2008 caner candan
** Last update Thu Apr 10 13:30:08 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_ftp.h"

void			create_client(t_ftp *f)
{
  struct sockaddr_in	addr;

  if (DEBUG)
    printf("create_client()\n");
  printf("connection to %s:%s\n", f->host, f->port);
  f->s = xsocket(PF_INET, SOCK_STREAM, 0);
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  addr.sin_port = htons(atoi(f->port));
  if (xconnect(f->s, (struct sockaddr *) &addr, sizeof(addr)) < 0)
    printf("port not exist\n");
}
