/*
** send_cmd.c for my_ftp in /home/candan_c/rendu/project/my_ftp_new
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Thu Apr  3 12:42:00 2008 caner candan
** Last update Tue Apr  8 08:23:08 2008 caner candan
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "my_ftp.h"

int	send_cmd(char *str, int cs)
{
  t_cmd	t;
  int	rc;
  int	fd;
  int	nbr;
  char	buf[4096];

  if (!str || !str[0])
    return (FAILED);
  t.str = str;
  rc = send_cmd_param(&t);
  if (rc == RET_CD)
    chdir(t.param);
  if (rc == RET_GET)
    {
      fd = open(t.param, O_RDONLY);
      while ((nbr = read(fd, buf, sizeof(buf))) > 0)
	write(cs, buf, nbr);
      close(fd);
    }
  if (rc > 0)
    {
      printf(PROMPT_CMD, t.app);
      send_cmd_client(cs, &t);
      send_cmd_server(&t);
    }
  return (rc);
}
