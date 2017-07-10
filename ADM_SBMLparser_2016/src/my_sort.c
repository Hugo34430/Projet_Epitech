/*
** my_sort.c for my_sort in /home/hugo/cours/ADM_SBMLparser_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Jun 14 13:20:22 2017 Hugo Bleuzen
** Last update Apr Jun 14 13:37:41 2017
*/

#include "my.h"

static int	my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] != s2[i])
        return (s1[i] - s2[i]);
      i = i + 1;
    }
  return (0);
}

char    **sort_list(char **txt)
{
  int   i;
  char  *p;

  i = 1;
  while (txt[i] != NULL)
    {
      if (txt[i] == NULL)
        i = 1;
      if (my_strcmp(txt[i], txt[i - 1]) < 0)
        {
          p = txt[i - 1];
          txt[i - 1] = txt[i];
          txt[i] = p;
          i = 0;
        }
      i = i + 1;
    }
  return (txt);
}
