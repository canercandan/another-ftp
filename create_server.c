/*
** create_server.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 11:51:29 2008 caner candan
** Last update Mon Apr 14 05:07:12 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_ftp.h"

int			create_server(t_ftp *f)
{
  struct sockaddr_in	addr;

  if (DEBUG)
    printf("create_server()\n");
  f->s = xsocket(PF_INET, SOCK_STREAM, 0);
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  addr.sin_port = htons(atoi(f->port));
  if (xbind(f->s, (struct sockaddr *) &addr, (void *) sizeof(addr)) < 0)
    return (FALSE);
  xlisten(f->s, NB_CLI);
  //getcwd(f->root, sizeof(f->root));
  return (TRUE);
}
