/*
** requirement.c for my_strtowordtab_synthesis in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 12 17:52:10 2017 Hugo Bleuzen
** Last update Apr Jun 14 10:34:28 2017
*/

#include <stdlib.h>

static int	my_strlen(char const *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

static int	count_word(char const *str)
{
  int		i;
  int		word;

  i = 0;
  word = 1;
  while (str[i])
    {
      if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') ||
          (str[i] >= 'A' && str[i] <= 'Z'))
        i++;
      else
        {
          word++;
          i++;
        }
    }
  return (word);
}

static int	is_separator(char const c)
{
  int		separator;

  separator = 0;
  if (c == '\0')
    return (84);
  if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z'))
    separator = 0;
  else
    separator = 1;
  return (separator);
}

char	**my_strtowordtab_synthesis(char const *str)
{
  char 	**tab;
  int 	i;
  int 	j;
  int 	k;
  int 	separator;

  i = 0;
  j = 0;
  if ((tab = malloc(sizeof(char *) * ((count_word(str) + 1)))) == NULL)
    return (NULL);
  while (is_separator(str[i]) == 1)
    i++;
  while (str[i])
    {
      if ((tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
	return (NULL);
      k = 0;
      while (str[i] && ((separator = is_separator(str[i])) == 0))
        tab[j][k++] = str[i++];
      tab[j++][k] = '\0';
      while (str[i] && ((separator = is_separator(str[i])) == 1))
	i++;
    }
  tab[j] = NULL;
  return (tab);
}
