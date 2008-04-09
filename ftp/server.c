/*
** server.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 09:23:57 2008 caner candan
** Last update Wed Apr  9 11:54:31 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include "my_ftp.h"

int	main(int ac, char **av)
{
  t_ftp	f;

  f.port = (ac < 2 ? PORT_DEFAULT : av[1]);
  f.s = create_server(f.port);
  getcwd(f.root, sizeof(f.root));
  while ((f.cs = xaccept(f.s, NULL, NULL)) > 0)
    get_client(&f);
  close(f.s);
  return (TRUE);
}
