/*
** verif_flags.c for verif_flags in /home/hugo/cours/Pisicine de Synthèse/ADM_FASTAtools_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Tue Jun 20 12:20:49 2017 Hugo Bleuzen
** Last update Mar Jun 20 12:23:31 2017
*/

#include "my.h"

int	verif_flags(char *str)
{
  char	**tab;

  if (strcmp(str, "1") == 0)
    {
      tab = my_reader();
      tab = modif_tab(tab);
      print_tab(tab);
      return (0);
    }
  else if (strcmp(str, "2") == 0)
    {
      tab = my_reader();
      tab = modif_tab2(tab);
      print_tab(tab);
      return (0);
    }
  else if (strcmp(str, "3") == 0)
    {
      tab = my_reader();
      tab = modif_tab3(tab);
      print_tab_3(tab);
      return (0);
    }
  return (84);
}
