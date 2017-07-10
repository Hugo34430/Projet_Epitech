/*
** strlen.c for strlen.c in /home/hugo/cours/Code/PrintF/PSU_2016_my_printf/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jan 30 15:34:28 2017 Hugo Bleuzen
** Last update Mon Jan 30 15:36:19 2017 Hugo Bleuzen
*/

#include "../include/my.h"

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
	i++;
  return (str[i]);
}
