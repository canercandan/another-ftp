/*
** trim.c for my_ftp in /home/candan_c/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 20:37:42 2008 caner candan
** Last update Fri Apr 11 19:27:47 2008 caner candan
*/

#include <string.h>
#include "my_ftp.h"

char	*trim(char *s)
{
  int	i;

  for (i = 0; s[i]; i++)
    if (s[i] == '\n' || s[i] == 0xD)
      {
	s[i] = '\0';
	break;
      }
  return (s);
}
