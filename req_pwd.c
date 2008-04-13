/*
** req_pwd.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:55:50 2008 caner candan
** Last update Sun Apr 13 19:30:26 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	req_pwd(t_cmd *c, t_req *r)
{
  char	path[PATH_SIZE];
  int	len;

  r = 0;
  printf("req_pwd()\n");
  mesg_dump(c->f->cs, NULL, "2201");
  getcwd(path, PATH_SIZE);
  len = strlen(path);
  xsend(c->f->cs, path, (void *) len, 0);
  xsend(c->f->cs, "\n", (void *) 2, 0);
  write(1, path, len);
  write(1, "\n", 2);
  return (0);
}
