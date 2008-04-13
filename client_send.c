/*
** client_send.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 17:49:34 2008 caner candan
** Last update Sun Apr 13 19:23:03 2008 caner candan
*/

#include <unistd.h>
#include <strings.h>
#include "my_ftp.h"

void	client_send(t_ftp *f)
{
  char	buf[1024];
  int	nbr;

  prompt();
  bzero(buf, sizeof(buf));
  while ((nbr = read(0, buf, sizeof(buf))))
    {
      send_init(f, buf);
      bzero(buf, sizeof(buf));
      prompt();
    }
}
