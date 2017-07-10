/*
** check_print.c for check_print in /home/hugo/cours/ADM_SBMLparser_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Wed Jun 14 09:10:45 2017 Hugo Bleuzen
** Last update Apr Jun 14 17:19:59 2017
*/

#include "my.h"

void	print_speciesRef()
{
  printf("speciesReference\n");
  printf("----->species\n");
  printf("----->stoichiometry\n");
}

void		check_print3(char **tab, int i)
{
  static 	int count = 0;

  if ((strcmp(tab[i], "speciesreference") == 0 && count == 0))
    {
      count = 1;
      print_speciesRef();
    }
}

void		check_print2(char **tab, int i)
{
  static 	int count = 0;
  static 	int count2 = 0;
  static 	int count3 = 0;

  if (strcmp(tab[i], "compartments") == 0 && count == 0)
    {
      print_comp();
      count = 1;
    }
  if (strcmp(tab[i], "species") == 0 && count2 == 0)
    {
      print_species();
      count2 = 1;
    }
  if (strcmp(tab[i], "reactions") == 0 && count3 == 0)
    {
      print_reaction();
      count3 = 1;
    }
}

void		check_print(char **tab)
{
  static	int	count = 0;
  static 	int	count2 = 0;
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (strcmp(tab[i], "sbml") == 0 && count == 0)
	{
	  print_sbml();
	  count = 1;
	}
      if (strcmp(tab[i], "model") == 0 && count2 == 0)
	{
	  print_model();
	  count2 = 1;
	}
      check_print2(tab, i);
      check_print3(tab, i);
      i++;
    }
}
