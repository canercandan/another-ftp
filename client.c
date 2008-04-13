/*
** client.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 10:12:20 2008 caner candan
** Last update Sun Apr 13 16:46:40 2008 caner candan
*/

#include <unistd.h>
#include <signal.h>
#include "my_ftp.h"

int	main(int ac, char **av)
{
  t_ftp	f;

  signal(SIGINT, client_signal);
  signal(SIGPIPE, client_signal);
  f.host = (ac < 2 ? HOST_DEFAULT : av[1]);
  f.port = (ac < 3 ? PORT_DEFAULT : av[2]);
  if (create_client(&f) == TRUE)
    get_server(&f);
  close(f.s);
  return (TRUE);
}
