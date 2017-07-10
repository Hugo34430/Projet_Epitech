/*
** tools.c for tools in /home/hugo/cours/Pisicine de Synthèse/ADM_projTester_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Jun 21 10:53:07 2017 Hugo Bleuzen
** Last update Jul Jun 24 15:12:38 2017
*/

#include "my.h"

int	erreur_management()
{
  perror("scandir");
  return (84);
}

char   *check_first(char *str)
{
  while (*str != '\0')
    {
      if (*str != '.' && *str != '/')
	break ;
      ++str;
    }
  return (str);
}

void  	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    free(tab[i]);
}

char 	*new_dir(char *str, char *str2)
{
  char	*new_str;
  int	i;
  int	x;

  i = -1;
  x = 0;
  new_str = malloc(sizeof(char)* (strlen(str) * strlen(str2) + 10));
  while (str[++i] != '\0')
      new_str[i] = str[i];
  if (str[i - 1] != '/')
    {
      new_str[i] = '/';
      i++;
    }
  while (str[x] != '\0')
    {
      new_str[i] = str2[x];
      i++;
      x++;
    }
  new_str[i] = '\0';
  return (new_str);
}
