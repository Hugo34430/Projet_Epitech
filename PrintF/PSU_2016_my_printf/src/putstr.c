/*
** putstr.c for putstr in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:01:29 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:10:11 2017 Hugo Bleuzen
*/
#include  <unistd.h>
#include  "../include/my.h"

void     my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
  {
  write(1, "(null)", 6);
  return ;
  }
  while (str[i] != '\0')
  {
    my_putchar(str[i]);
    i = i + 1;
  }
}
