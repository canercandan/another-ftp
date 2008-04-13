/*
** get_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 22:25:28 2008 caner candan
** Last update Sun Apr 13 17:54:29 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "my_ftp.h"

void	get_server(t_ftp *f)
{
  int	pid;

  if (DEBUG)
    printf("get_server()\n");
  if (!(pid = fork()))
    client_listen(f);
  client_send(f);
}
