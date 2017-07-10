/*
** putnbr.c for putnbr in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:03:29 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:08:30 2017 Hugo Bleuzen
*/
#include <unistd.h>
#include  "../include/my.h"

int     my_put_nbr(int nbr)
{
  int   i;

  if (nbr < 0)
  {
    my_putchar('-');
    nbr = nbr * (-1);
  }
  if (nbr >= 0)
  {
    if (nbr >= 10)
	{
	  i = (nbr % 10);
    nbr = (nbr - i) / 10;
	  my_put_nbr(nbr);
	  my_putchar(48 + i);
        }
      else
        my_putchar(48 + nbr % 10);
    }
  return (0);
}
