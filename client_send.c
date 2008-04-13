/*
** client_send.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 17:49:34 2008 caner candan
** Last update Sun Apr 13 17:51:19 2008 caner candan
*/

#include <unistd.h>
#include "my_ftp.h"

void	client_send(t_ftp *f)
{
  char	buf[1024];
  int	nbr;

  prompt();
  while ((nbr = read(0, buf, sizeof(buf))))
    {
      xsend(f->s, buf, (void *) nbr, 0);
      prompt();
    }
}
