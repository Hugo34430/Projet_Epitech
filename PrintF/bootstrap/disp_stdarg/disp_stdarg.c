/*
** disp_stdarg.c for printbs in /home/hugo/cours/PrintF/bootstrap/disp_stdarg/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Nov  9 22:36:42 2016 Hugo Bleuzen
** Last update Thu Nov 17 20:44:46 2016 Hugo Bleuzen
*/
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

void 	    my_putchar(char c)
{
  write(1, &c, 1);
}

int	      my_put_nbr(int nb)
{
  int     a;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
     }
  if (nb >= 0)
    {
      if (nb >= 10)
	      {
	        a = (nb % 10);
          nb = (nb - a) / 10;
	        my_put_nbr(nb);
	        my_putchar(48 + a);
        }
      else
        my_putchar(48 + nb % 10);
    }
return (0);
}

int   my_put_nbr_base(int nbr, char *base)
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
    nbr = nbr / i;
    my_putchar(base[nbr % i]);
  }
  if (nbr >= 0 && nbr < i)
    my_putchar(base[nbr]);
}

int	      my_putstr(char *str)
{
  int	a;

  a  = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
  return (0);
}

void      disp_stdarg(char *s, ...)
{
  int        i;
  va_list    var;

  i = 0;
  va_start(var, s);
  while (s[i] != '\0')
  {
    if (s[i] == 'c')
    {
      my_putchar(va_arg(var, int));
      my_putchar('\n');
    }
    if (s[i] == 's')
    {
      my_putstr(va_arg(var, char *));
      my_putchar('\n');
    }
    if (s[i] == 'i' || s[i] == 'd')
    {
      my_put_nbr(va_arg(var, int));
      my_putchar('\n');
    }
    i = i + 1;
  }
  /*if (s[i] == 'x')
  {
    my_put_nbr_base(va_arg(var,))
  }*/
  va_end(var);
}

int     main()
{
  disp_stdarg("cciiss", 'A', 'b', -3, 34567, "hello", "bonjour");
}
