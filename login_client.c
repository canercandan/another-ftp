/*
** login_client.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Mon Apr 14 04:49:55 2008 caner candan
** Last update Mon Apr 14 05:58:55 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "my_ftp.h"

int	login_client(t_ftp *f)
{
  char	line[200];
  char	buf[200];
  int	nbr;

  if (DEBUG)
    printf("login_client()\n");
  write(1, PROMPT_USER, strlen(PROMPT_USER));
  if ((nbr = read(0, line, sizeof(line))) > 0)
    {
      sprintf(buf, SD_FMT, RQ_USER, line, "");
      xsend(f->s, buf, (void *) strlen(buf), 0);
    }
  write(1, PROMPT_PASS, strlen(PROMPT_PASS));
  if ((nbr = read(0, line, sizeof(line))) > 0)
    {
      sprintf(buf, SD_FMT, RQ_PASS, line, "");
      xsend(f->s, buf, (void *) strlen(buf), 0);
    }
  return (TRUE);
}
