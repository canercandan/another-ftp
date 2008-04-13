/*
** client_signal.c for my_ftp in /home/candan_c/cu/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Sun Apr 13 03:00:06 2008 caner candan
** Last update Sun Apr 13 03:06:04 2008 caner candan
*/

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my_ftp.h"

void	client_signal(int signal)
{
  if (signal == SIGINT)
    {
      printf("\nCTRL + C\n");
      exit(2);
    }
  if (signal == SIGPIPE)
    {
      printf("\nsignal from server\n");
      kill(getpid(), SIGINT);
    }
}
