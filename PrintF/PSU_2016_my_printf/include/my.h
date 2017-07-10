/*
** my.h for my.h in /home/hugo/cours/PrintF/PSU_2016_my_printf/fonction pour le printf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Sun Nov 20 17:36:04 2016 Hugo Bleuzen
** Last update Sun Dec 18 10:43:31 2016 Hugo Bleuzen
*/


#ifndef MY_H_
# define MY_H_

#include <stdarg.h>
#include <stdlib.h>

int         my_printf(char *s, ...);
void        disp_stdarg(char s, va_list arg);
void        my_putstr(char *str);
int         my_put_nbr_base(int nbr, char *base);
int         my_put_nbr_unsigned(unsigned int nbr, char *base);
int         my_put_nbr(int nb);
int         my_strlen(char *str);
void         my_putchar(char c);
int         my_putnbr_uli(unsigned long int nbr, char *base);

#endif /* MY_H_*/
