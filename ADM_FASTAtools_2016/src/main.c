/*
** main.c for main.c in /home/hugo/cours/Pisicine de Synthèse/ADM_FASTAtools_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Jun 16 14:55:50 2017 Hugo Bleuzen
** Last update Mar Jun 20 12:24:24 2017
*/

#include "my.h"

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac == 1 || ac > 3)
    return (84);
  display_help(av);
  while (av[i])
    {
      if (av[i][0] < '0' || av[i][0] > '9')
	return (84);
      else if (verif_flags(av[i]) == 0)
	return (0);
      i++;
    }
  return (84);
}
