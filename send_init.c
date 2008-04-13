/*
** send_init.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 17:56:02 2008 caner candan
** Last update Sun Apr 13 18:35:50 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

t_snd	gl_snd[] = {
  {SD_LIST, send_list, RQ_LIST},
  {SD_DIR, send_list, RQ_LIST},
  {SD_CWD, send_cwd, RQ_CWD},
  {SD_MKD, send_mkd, RQ_MKD},
  {SD_DELE, send_dele, RQ_DELE},
  {SD_RN, send_rn, 0},
  {SD_RMD, send_rmd, RQ_RMD},
  {SD_FTP, send_ftp, 0},
  {SD_OPEN, send_open, 0},
  {SD_HELP, send_help, 0},
  {SD_ASCII, send_ascii, 0},
  {SD_BINARY, send_binary, 0},
  {SD_QUIT, send_quit, RQ_QUIT},
  {SD_BYE, send_quit, RQ_QUIT},
  {SD_DISC, send_disc, 0},
  {SD_GET, send_get, RQ_GET},
  {SD_PUT, send_put, RQ_PUT},
  {0, 0, 0}
};

int	send_init(t_ftp *f, char *s)
{
  char	*snd[3];
  int	i;

  if (DEBUG)
    printf("send_init()\n");
  snd[0] = strtok(s, DELIMIT);
  s = NULL;
  snd[1] = strtok(s, DELIMIT);
  s = NULL;
  snd[2] = strtok(s, DELIMIT);
  if (!snd)
    return (FALSE);
  for (i = 0; gl_snd[i].snd; i++)
    if (!strcmp(gl_snd[i].snd, snd[0]))
      return (gl_snd[i].f(f, &gl_snd[i], snd));
  return (0);
}
