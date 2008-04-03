/*
** parse_arg.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 11:34:19 2008 caner candan
** Last update Thu Apr  3 11:44:28 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include "my_ftp.h"

char	*parse_arg(char *param, int pos, int ac, char **av)
{
  int	i;

  for (i = 1; i < ac; i++)
    {
      if (strcmp(av[i], param))
	continue;
      if (i + pos < ac)
	return (av[i + pos]);
    }
  return (0);
}
