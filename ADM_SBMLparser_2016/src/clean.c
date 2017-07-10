/*
** clean.c for clean in /home/hugo/cours/ADM_SBMLparser_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Jun 14 17:15:17 2017 Hugo Bleuzen
** Last update Apr Jun 14 17:16:42 2017
*/

#include "my.h"

char	*to_lower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z' && str[i])
	  str[i] = str[i] + 32;
      i++;
    }
  i = 0;
  return (str);
}

char	**clean_first_letter(char **tab)
{
  int 	i;

  i = 0;
  while (tab[i] != NULL)
    {
      tab[i] = to_lower(tab[i]);
      i++;
    }
  return (tab);
}

char	**clean_tab(char **tab)
{
  int i;

  i = 0;
  while (tab[i] !=  NULL)
    {
      if (strncmp(tab[i], "listOf", 6) == 0)
	  tab[i] = tab[i] + 6;
      tab[i] = to_lower(tab[i]);
      i++;
    }
  clean_first_letter(tab);
  return (tab);
}
