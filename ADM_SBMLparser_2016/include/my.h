/*
** my.h for my.h in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/include/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 12 12:56:08 2017 Hugo Bleuzen
** Last update Apr Jun 14 17:17:54 2017
*/

#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct s_title
{
  char 	*str; /*nom de balise*/
  struct s_title *next; /*ce deplace sur les balise*/
  struct s_carac *elem; /*ce deplace sur les elements*/
}	t_title;

typedef struct s_carac
{
  char *str; /*nom de carac*/
  struct s_carac *next; /*pointer sur le prochain carac*/
}	t_carac;

char	*my_reader(char *str);
char	**my_strtowordtab_synthesis(char const *str);
void 	print_tableau();
int	main(int ac, char **av);
void	check_print(char **tab);
void 	print_comp();
void	print_model();
void	print_reaction();
void	print_sbml();
void	print_species();
char	**create_tab_balise(char **tab);
char    **sort_list(char **txt);
char	**clean_tab(char **tab);

#endif /*MY_H_*/
