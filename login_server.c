/*
** login_server.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Mon Apr 14 04:28:26 2008 caner candan
** Last update Mon Apr 14 05:36:36 2008 caner candan
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_ftp.h"

int	login_server(t_cmd *c)
{
  char	*s;
  int	fd;
  char	*tab[3];

  if (DEBUG)
    printf("login_server()\n");
  if ((fd = open(USER_FILE, O_RDONLY)) < 0)
    return (FALSE);
  while ((s = get_next_line(fd)))
    {
      tab[0] = strtok(s, DELIMIT);
      s = NULL;
      tab[1] = strtok(s, DELIMIT);
      s = NULL;
      tab[2] = strtok(s, DELIMIT);
      if (!strcmp(c->f->user, tab[0]) && !strcmp(c->f->pass, tab[1]))
	{
	  c->f->cnt = TRUE;
	  break;
	}
    }
  c->f->root = strdup(tab[2]);
  close(fd);
  return (TRUE);
}
