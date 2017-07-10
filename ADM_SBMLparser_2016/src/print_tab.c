/*
** print_tableau.c for print_tab in /home/hugo/cours/Pisicine de Synthèse/ADM_SBMLparser_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Tue Jun 13 13:14:35 2017 Hugo Bleuzen
** Last update Apr Jun 14 09:46:22 2017
*/

#include "my.h"

void print_comp()
{
  printf("compartment\n");
  printf("----->id\n");
  printf("----->name\n");
}

void	print_model()
{
  printf("model\n");
  printf("----->id\n");
  printf("----->name\n");
}

void	print_reaction()
{
  printf("reaction\n");
  printf("----->compartment\n");
  printf("----->id\n");
  printf("----->name\n");
  printf("----->reversible\n");
}

void	print_sbml()
{
  printf("sbml\n");
  printf("----->level\n");
  printf("----->version\n");
  printf("----->xmlns\n");
}

void	print_species()
{
  printf("species\n");
  printf("----->compartment\n");
  printf("----->id\n");
  printf("----->name\n");
}
