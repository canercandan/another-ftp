/*
** get_next_line.c for get_next_line in /u/epitech_2010s/candan_c/cu/rendu/test
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Fri Apr 11 20:14:06 2008 caner candan
** Last update Sat Apr 12 12:19:32 2008 caner candan
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "my_ftp.h"

char		*get_next_line(int fd)
{
  static char	*obuf;
  char		buf[1024];
  char		*str;
  int		size;
  int		i;
  int		j;

  str = obuf;
  obuf = NULL;
  for (i = 0; str && str[i]; i++)
    if (str[i] == '\n' || str[i] == '\r')
      {
	str[i] = 0;
	obuf = strdup(str + i + 1);
	return (str);
      }
  while (42)
    {
      bzero(buf, sizeof(buf));
      if ((size = read(fd, buf, sizeof(buf))) <= 0)
	return (str);
      i = (str ? strlen(str) : 0);
      str = malloc(i + size + 1);
      for (j = 0; j < size; j++)
	str[i + j] = buf[j];
      for (i = 0; str[i]; i++)
	if (str[i] == '\n' || str[i] == '\r')
	  {
	    str[i] = 0;
	    obuf = strdup(str + i + 1);
	    return (str);
	  }
    }
  return (str);
}
