/*
** putchar.c for putchar in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:01:53 2016 Hugo Bleuzen
** Last update Mon Jan 30 15:08:20 2017 Hugo Bleuzen
*/

#include "../include/my.h"
#include <unistd.h>

void   my_putchar(char c)
{
  write (1, &c, 1);
}
