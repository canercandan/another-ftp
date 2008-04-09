/*
** control_path.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Wed Apr  9 11:30:17 2008 caner candan
** Last update Wed Apr  9 12:34:12 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

int	control_path(t_ftp *f, char *path)
{
  char	before[PATH_SIZE];
  char	after[PATH_SIZE];

  getcwd(before, PATH_SIZE);
  chdir(path);
  getcwd(after, PATH_SIZE);
  printf("root: %s, before: %s, after: %s\n",
	 f->root, before, after);
  if (!strncmp(f->root, after, strlen(f->root)))
    return (TRUE);
  chdir(before);
  return (FALSE);
}
