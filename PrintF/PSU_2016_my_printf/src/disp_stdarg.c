/*
** disp_stdarg.c for disp_stdarg in /home/hugo/cours/PrintF/PSU_2016_my_printf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Sun Nov 20 19:12:08 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:07:56 2017 Hugo Bleuzen
*/

#include "../include/my.h"

void      disp_stdarg(char s, va_list arg)
{
    if (s == 'c')
      my_putchar(va_arg(arg, int));
    if (s == 's')
      my_putstr(va_arg(arg, char *));
    if (s == 'i' || s == 'd')
      my_put_nbr(va_arg(arg, int));
    if (s == 'X')
      my_put_nbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
    if (s == 'x')
      my_put_nbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
    if (s == 'b')
      my_put_nbr_base(va_arg(arg, unsigned int), "01");
    if (s == 'o')
      my_put_nbr_base(va_arg(arg, unsigned int), "01234567");
    if (s == '%')
      my_putchar('%');
    if (s == 'p')
      my_putnbr_uli(va_arg(arg, unsigned long int), "0123456789abcdef");
}
