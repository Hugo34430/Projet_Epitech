/*
** init_struct.c for init_struct in /home/hugo/cours/Pisicine de Synthèse/ADM_SBMLparser_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Tue Jun 13 18:23:23 2017 Hugo Bleuzen
** Last update Mar Jun 13 20:54:25 2017
*/

#include "my.h"

t_title init_struct()
{
  t_title *title;

  title = malloc(sizeof(t_title));
  title->next = NULL;
}

t_carac init_struct2()
{
  t_carac *carac;

  carac = malloc(sizeof(t_carac));
  carac->next = NULL;
}

t_title ajoutentete(t_title title, char *str)
{
  title->str = str;
  title->next = title;
  return (title);
}

t_carac ajoutentete2(t_carac carac, char *str)
{
  carac->str = str;
  carac->next = carac;
  return (carac);
}
