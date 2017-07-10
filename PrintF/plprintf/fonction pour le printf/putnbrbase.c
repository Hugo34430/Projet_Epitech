/*
** putnbrbase.c for putnbrbase.c in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:06:16 2016 Hugo Bleuzen
** Last update Fri Nov 18 11:20:28 2016 Hugo Bleuzen
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int      my_strlen(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
  {
    a = a + 1;
  }
  return (a);
}

void   my_putchar(char c)
{
  write(1, &c , 1);
}

int  my_putnbr_base(int nbr, char *base)
{
  int   i;

  i = my_strlen(base);
  if (nbr < 0)
  {
    my_putchar('-');
    nbr = nbr * (-1);
  }
  if (nbr >= i)
  {
    my_putchar(base[nbr % i]);
    nbr = nbr / i;
  }
  if (nbr >= 0 && nbr < i)
  {
    my_putchar(base[nbr]);
  }
  return (0);
}

int   main()
{
  printf("%X\n", 200);
  my_putnbr_base(200, "0123456789ABCDEF");
  my_putchar('\n');
  return (0);
}
