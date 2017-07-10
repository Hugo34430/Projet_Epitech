/*
** putpointer.c for my_put_nbr_unsigned in /home/hugo/cours/PrintF/PSU_2016_my_printf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Sun Nov 20 20:23:31 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:07:46 2017 Hugo Bleuzen
*/

#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int       my_putnbr_uli(unsigned long int nbr, char *base)
{
  unsigned long int     rest;
  int      max;

    max = my_strlen(base);
    rest = nbr % max;
    nbr = nbr / max;
  if (nbr != 0)
      my_putnbr_uli(nbr, base);
  my_putchar(base[rest]);
  return (0);
}
