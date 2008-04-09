/*
** req_acct.c for my_ftp in /u/epitech_2010s/candan_c/cu/rendu/c/my_ftp/ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Tue Apr  8 18:06:18 2008 caner candan
** Last update Wed Apr  9 20:11:36 2008 caner candan
*/

#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include "my_ftp.h"

int	req_acct(t_cmd *c, t_req *r)
{
  c = NULL;
  r = NULL;
  printf("req_acct()\n");
  //sprintf(buf, MESG_ACCT_OK, CODE_OK, c->param);
  //xsend(c->f->cs, buf, strlen(buf), 0);
  return (0);
}
