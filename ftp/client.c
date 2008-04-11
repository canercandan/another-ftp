/*
** client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 10:12:20 2008 caner candan
** Last update Fri Apr 11 09:51:45 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include "my_ftp.h"

int	main(int ac, char **av)
{
  t_ftp	f;

  f.host = (ac < 2 ? HOST_DEFAULT : av[1]);
  f.port = (ac < 3 ? PORT_DEFAULT : av[2]);
  create_client(&f);
  if ((f.cs = xconnect(f.s, NULL, NULL)))
    get_server(&f);
  close(f.s);
  return (TRUE);
}
