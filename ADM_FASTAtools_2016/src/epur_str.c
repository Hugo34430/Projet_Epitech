/*
** epur_str.c for epur_str in /home/hugo/cours/Pisicine de Synthèse/ADM_FASTAtools_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 19 17:49:56 2017 Hugo Bleuzen
** Last update Mar Jun 20 16:09:02 2017
*/

#include "my.h"

int	epur_len(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T'
	  || str[i] == 'N')
	count += 1;
      i += 1;
    }
  return (count);
}

char	*epur_str(char *str)
{
  int	i;
  int	x;
  char	*string;

  if (!(string = malloc(sizeof(char) * (epur_len(str) + 1))))
    return (NULL);
  i = 0;
  x = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T'
	  || str[i] == 'N' || str[i] == 'U')
	{
	  string[x] = str[i];
	  x++;
	}
      if (str[i] == 'a' || str[i] == 'c' || str[i] == 'g' || str[i] == 'n'
	  || str[i] == 'u' || str[i] == 't')
          {
            string[x] = str[i] - 32;
            x++;
          }
      i += 1;
    }
  string[x] = '\0';
  free(str);
  return (string);
}
