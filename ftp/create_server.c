/*
** create_server.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 11:51:29 2008 caner candan
** Last update Thu Apr  3 12:00:43 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include "my_ftp.h"

int			create_server(char *port)
{
  struct sockaddr_in	addr;
  int			s;

  s = xsocket(PF_INET, SOCK_STREAM, 0);
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = htonl(INADDR_ANY);
  addr.sin_port = htons(atoi(port));
  xbind(s, (struct sockaddr *) &addr, sizeof(addr));
  xlisten(s, NB_CLI);
  return (s);
}
