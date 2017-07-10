/*
** putnbr.c for putnbr in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:03:29 2016 Hugo Bleuzen
** Last update Fri Nov  4 16:50:38 2016 Hugo Bleuzen
** fonction de putnbr --> permet de traduire notre chiffre en ascii
*/
#include <unistd.h>

void     my_putchar(char c)
{
  write(1, &c ,1);
}

int     putnbr(int nbr)
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
	  putnbr(nbr);
	  my_putchar(48 + i);
        }
      else
        my_putchar(48 + nbr % 10);
    }
  return (0);
}

int     main()
{
  putnbr(1000000);
  my_putchar('\n');
  return (0);
}
