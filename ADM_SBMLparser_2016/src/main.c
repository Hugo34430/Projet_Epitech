/*
** main.c for main.c in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 12 17:17:01 2017 Hugo Bleuzen
** Last update May Jun 15 09:09:38 2017
*/

#include "my.h"

void print_tab(char **tab)
{
  int i = 0;
  while (tab[i])
   {
      printf("%s\n", tab[i]);
      i++;
   }
}

int	main(int ac, char **av)
{
  char 	**tab;
  char 	*str;
  char  **tab_of_balise;

  if (ac < 2)
    return (84);
  if ((str = my_reader(av[1])) == NULL)
    return (84);
  tab = my_strtowordtab_synthesis(str);
  tab_of_balise = create_tab_balise(tab);
  tab_of_balise = clean_tab(tab_of_balise);
  tab_of_balise = sort_list(tab_of_balise);
  check_print(tab_of_balise);
  return (0);
}
