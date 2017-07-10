/*
** create_tab_balise.c for create_tab_balise in /home/hugo/cours/ADM_SBMLparser_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Jun 14 12:13:24 2017 Hugo Bleuzen
** Last update Apr Jun 14 18:20:26 2017
*/

#include "my.h"

char		**create_tab_balise3(char **tab, char **new_tab,
				     int i, int *line_tab)
{
  static 	int count = 0;
  static 	int count2 = 0;

  if (strcmp(tab[i], "model") == 0 && count == 0)
    {
      new_tab[*line_tab] = malloc(sizeof(char) * strlen("model"));
      new_tab[*line_tab] = strdup("model");
      count = 1;
      *line_tab = *line_tab + 1;
    }
  if ((strcmp(tab[i], "listOfReactants") == 0 &&
       strcmp(tab[i], "listOfProducts")) && count2 == 0)
    {
      new_tab[*line_tab] = malloc(sizeof(char) * strlen("speciesReference"));
      new_tab[*line_tab] = strdup("speciesReference");
      count2 = 1;
      *line_tab = *line_tab + 1;
    }
  return (new_tab);
}

char		**create_tab_balise2(char **tab, char **new_tab,
				     int i, int *line_tab)
{
  static 	int	count = 0;
  static 	int	count2 = 0;

  if (strcmp(tab[i], "listOfReactions") == 0 && count == 0)
    {
      new_tab[*line_tab] = malloc(sizeof(char) * strlen("listOfReactions"));
      new_tab[*line_tab] = strdup("listOfReactions");
      count = 1;
      *line_tab = *line_tab + 1;
    }
  if (strcmp(tab[i], "sbml") == 0 && count2 == 0)
    {
      new_tab[*line_tab] = malloc(sizeof(char) * strlen("sbml"));
      new_tab[*line_tab] = strdup("sbml");
      count2 = 1;
      *line_tab = *line_tab + 1;
    }
  return (new_tab);
}
char		**create_tab_balise1(char **tab, char **new_tab,
				     int i, int *line_tab)
{
  static	int count = 0;

  if (strcmp(tab[i], "listOfSpecies") == 0 && count == 0)
    {
      new_tab[*line_tab] = malloc(sizeof(char) * strlen("listOfSpecies"));
      new_tab[*line_tab] = strdup("listOfSpecies");
      count = 1;
      *line_tab = *line_tab + 1;
    }
  return (new_tab);
}

char		**create_tab_balise(char **tab)
{
  int		i;
  char		**new_tab;
  int		line_tab;
  static	int count = 0;

  i = 0;
  line_tab = 0;
  new_tab = malloc(sizeof(char *) * 1000);
  while (tab[i] != NULL)
    {
      if (strcmp(tab[i], "listOfCompartments") == 0 && count == 0)
	{
	  new_tab[line_tab] = malloc(sizeof(char) *
				     strlen("listOfCompartments"));
	  new_tab[line_tab] = strdup("listOfCompartments");
	  count = 1;
	  line_tab++;
	}
      new_tab = create_tab_balise1(tab, new_tab, i, &line_tab);
      new_tab = create_tab_balise2(tab, new_tab, i, &line_tab);
      new_tab = create_tab_balise3(tab, new_tab, i, &line_tab);
      i++;
    }
  tab[i] = NULL;
  new_tab[line_tab] = NULL;
  return (new_tab);
}
