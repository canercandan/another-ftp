/*
** req_get.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 15:17:32 2008 caner candan
** Last update Tue Apr  8 20:51:05 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "my_ftp.h"

int	req_get(t_cmd *cmd, t_req *req)
{
  char	buf[4096];
  int	fd;
  int	nbr;

  printf("req_get()\n");
  fd = open(cmd->param, O_RDONLY);
  while ((nbr = read(fd, buf, sizeof(buf))) > 0)
    {
      write(cmd->cs, buf, nbr);
      write(1, buf, nbr);
    }
  close(fd);
  return (0);
}
