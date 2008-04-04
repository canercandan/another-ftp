/*
** server.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:23:57 2008 caner candan
** Last update Fri Apr  4 17:23:59 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include "my_ftp.h"

int	main(int ac, char **av)
{
  int	s;
  int	cs;

  s = create_server(ac < 2 ? PORT_DEFAULT : av[1]);
  while ((cs = xaccept(s, NULL, NULL)) > 0)
    get_client(cs);
  close(s);
  return (SUCCESS);
}
