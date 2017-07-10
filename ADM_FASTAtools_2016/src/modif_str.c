/*
** modif_str.c for modif_str in /home/hugo/cours/Pisicine de Synthèse/ADM_FASTAtools_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 19 15:37:02 2017 Hugo Bleuzen
** Last update Tue Jun 20 20:31:44 2017 Hugo Bleuzen
*/

#include "my.h"

char		*option_3(char	*str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 'a' || str[i] == 'c' || str[i] == 'g' || str[i] == 'n')
          str[i] = str[i] - 32;
      if (str[i] == 'T' || str[i] == 't')
        str[i] = 'A';
      else if (str[i] == 'C' || str[i] == 'c')
        str[i] = 'G';
      else if (str[i] == 'A' || str[i] == 'a')
	str[i] = 'T';
      else if (str[i] == 'G' || str[i] == 'g')
	str[i] = 'C';
      i++;
    }
  return (str);
}

char		*modif_str(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == 'a' || str[i] == 'c' || str[i] == 'g' || str[i] == 'n')
        {
          str[i] = str[i] - 32;
          str[i] = str[i];
        }
      if (str[i] == 'T' || str[i] == 't')
        str[i] = 'U';
      else
        str[i] = str[i];
      i++;
    }
  return (str);
}

char	**modif_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (tab[i][0] != '>')
	tab[i] = epur_str(tab[i]);
      i += 1;
    }
  return (tab);
}

char	**modif_tab2(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (tab[i][0] != '>')
	{
	  tab[i] = epur_str(tab[i]);
	  tab[i] = modif_str(tab[i]);
	}
      i += 1;
    }
  return (tab);
}

char	**modif_tab3(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (tab[i][0] != '>')
	{
	  tab[i] = my_revstr(tab[i]);
	  tab[i] = option_3(tab[i]);
	  tab[i] = epur_str(tab[i]);
	}
      i += 1;
    }
  return (tab);
}
