/*
** req_init.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 14:46:58 2008 caner candan
** Last update Mon Apr 14 04:26:20 2008 caner candan
*/

#include <string.h>
#include <stdio.h>
#include "my_ftp.h"

t_req	gl_req[] = {
  {RQ_LIST, req_list, "ls", "-lgA", TRUE},
  {RQ_GET, req_get, 0, 0, TRUE},
  {RQ_PUT, req_put, 0, 0, TRUE},
  {RQ_USER, req_user, 0, 0, FALSE},
  {RQ_PASS, req_pass, 0, 0, FALSE},
  {RQ_ACCT, req_acct, 0, 0, TRUE},
  {RQ_PWD, req_pwd, 0, 0, TRUE},
  {RQ_CWD, req_cwd, 0, 0, TRUE},
  {RQ_MKD, req_mkd, 0, 0, TRUE},
  {RQ_DELE, req_dele, 0, 0, TRUE},
  {RQ_RMD, req_rmd, 0, 0, TRUE},
  {RQ_PORT, req_port, 0, 0, TRUE},
  {RQ_MODE, req_mode, 0, 0, TRUE},
  {RQ_SIZE, req_size, 0, 0, TRUE},
  {RQ_STAT, req_stat, 0, 0, TRUE},
  {RQ_QUIT, req_quit, 0, 0, EMPTY},
  {RQ_RNFR, req_rn, 0, 0, TRUE},
  {RQ_RNTO, req_rn, 0, 0, TRUE},
  {RQ_SYST, req_syst, 0, 0, TRUE},
  {RQ_FEAT, req_feat, 0, 0, TRUE},
  {RQ_EPSV, req_epsv, 0, 0, TRUE},
  {RQ_NOOP, req_noop, 0, 0, EMPTY},
  {0, 0, 0, 0, 0}
};

int	req_init(t_cmd *c)
{
  int	i;

  if (DEBUG)
    printf("req_init()\n");
  if (!c)
    return (FALSE);
  for (i = 0; gl_req[i].req; i++)
    {
      if (!strcmp(gl_req[i].req, c->app))
	{
	  if (gl_req[i].cnt == c->f->cnt || gl_req[i].cnt == EMPTY)
	    return (gl_req[i].f(c, &gl_req[i]));
	  xsend(c->f->cs, ERR_CONNECT, (void *) strlen(ERR_CONNECT), 0);
	  return (DENIED);
	}
    }
  return (TRUE);
}
