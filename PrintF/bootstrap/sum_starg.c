/*
** sum_starg.c for sum_stdarg in /home/hugo/cours/PrintF/bootstrap/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Nov  9 21:04:43 2016 Hugo Bleuzen
** Last update Sat Nov 12 18:19:29 2016 Hugo Bleuzen
*/
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int   	  my_strlen(char *str)
{
  int	  a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}

int       sum_stdarg_str(va_list li, int nb)
{
  int   i;
  int   sum;

  i = 0;
  sum = 0;
  while (i < nb)
  {
    sum += my_strlen(va_arg(li, char *));
    i = i + 1;
  }
  va_end(li);
  return (sum);
}

int       sum_stdarg_int(va_list li, int nb)
{
  int   i;
  int   sum;

  i = 0;
  sum = 0;
  while (i < nb)
    {
      sum += va_arg(li, int);
      i = i + 1;
    }
  va_end(li);
  return (sum);
}

int       sum_stdarg(int i, int nb, ...)
{
  va_list   li;

  va_start(li, nb);
  if (i == 0)
    return (sum_stdarg_int(li, nb));
  else if (i == 1)
    return (sum_stdarg_str(li, nb));
  return (0);
}
