/*
** my.h for my.h in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/include/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 12 12:56:08 2017 Hugo Bleuzen
** Last update Mar Jun 20 12:21:09 2017
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**my_reader();
void 	display_help(char **av);
char	*modif_str(char	*str);
int	print_tab(char **tab);
char	**alignment_seq(char **tab);
char	**modif_tab(char **tab);
char	*epur_str(char *str);
char	**modif_tab2(char **tab);
char    *my_revstr(char *str);
void	print_tab_3(char **tab);
char	**modif_tab3(char **tab);
int	verif_flags(char *str);

#endif /*MY_H_*/
