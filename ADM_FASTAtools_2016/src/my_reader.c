/*
** my_reader.c for my_reader in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 12 19:29:28 2017 Hugo Bleuzen
** Last update Mar Jun 20 16:03:50 2017
*/

#include "my.h"

void	print_tab_3(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      printf("%s\n", tab[i]);
      i += 1;
    }
}

int	print_tab(char **tab)
{
  int i;

  i = 1;
  printf("%s\n", tab[0]);
  while (tab[i] != NULL)
    {
      if (tab[i][0] == '>')
	printf("\n%s\n", tab[i]);
      else
	printf("%s", tab[i]);
      i += 1;
}
printf("\n");
return (i);
}

int	tab_len(char **tab)
{
  int i;

  i = 0;
  while (tab[i] != NULL)
      i++;
  return (i);
}

char	**realloc_tab(char **tab, char *str)
{
  char **new_tab;
  int i;

  i = 0;
  new_tab = malloc(sizeof(char *) * (tab_len(tab) + 2));
  while (tab[i] != NULL)
    {
      new_tab[i] = strdup(tab[i]);
      i++;
    }
  new_tab[i] = strdup(str);
  new_tab[i + 1] = NULL;
  return (new_tab);
}

char		**my_reader()
{
  char		**tab;
  char 		*line;
  size_t 	len;
  ssize_t	read;
  FILE		*fd;

  line = NULL;
  len = 0;
  fd = stdin;
  tab = malloc(sizeof(char *) * 2);
  tab[0] = NULL;
  while ((read = getline(&line, &len, fd)) != -1)
    {
      if (strlen(line) != 0)
	line[strlen(line) - 1] = '\0';
      else
	line[0] = '\0';
      tab = realloc_tab(tab, line);
    }
  if (line)
    free(line);
  return (tab);
}
