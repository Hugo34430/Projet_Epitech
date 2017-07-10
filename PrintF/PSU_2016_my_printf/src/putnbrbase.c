/*
** putnbrbase.c for putnbrbase.c in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:06:16 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:10:13 2017 Hugo Bleuzen
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int       my_put_nbr_base(int nbr, char *base)
{
  int     max;
  int     rest;

  max = my_strlen(base);
  rest = nbr % max;
  nbr = nbr / max;
  if (nbr > 0)
    my_put_nbr_base(nbr, base);
  my_putchar(base[rest]);
  return (0);
}
