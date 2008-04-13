/*
** prompt.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Fri Apr 11 19:45:21 2008 caner candan
** Last update Fri Apr 11 21:40:38 2008 caner candan
*/

#include <unistd.h>
#include <string.h>
#include "my_ftp.h"

void		prompt()
{
  write(1, PROMPT, strlen(PROMPT));
}
