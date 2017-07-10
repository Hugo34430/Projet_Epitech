/*
** my_printf.c for my_printf in /home/hugo/cours/PrintF/PSU_2016_my_printf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Nov 17 18:49:14 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:07:47 2017 Hugo Bleuzen
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../include/my.h"

int     my_printf(char *s, ...)
{
  int       i;
  va_list   var;

  i = 0;
  va_start(var, s);
  while (s[i] != '\0')
  {
    if (s[i] == '%')
    {
      i = i + 1;
      if (s[i] == 'c' || s[i] == 's' || s[i] == 'i' || s[i] == 'd' ||
          s[i] == 'X' || s[i] == 'x' || s[i] == 'o' || s[i] == '%' ||
          s[i] == 'b')
      {
        disp_stdarg(s[i], var);
      }
    }
    else
    {
      my_putchar(s[i]);
    }
    i = i + 1;
  }
  va_end(var);
  return (0);
}
