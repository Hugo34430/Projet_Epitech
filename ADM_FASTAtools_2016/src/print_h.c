/*
** print_h.c for print_h in /home/hugo/cours/Pisicine de Synthèse/ADM_palindrome_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Jun 15 10:57:24 2017 Hugo Bleuzen
** Last update Mar Jun 20 12:02:50 2017
*/

#include "my.h"

void	print_h()
{
  printf("USAGE\n");
  printf("\t./FASTAtools option\n");
  printf("\nDESCRIPTION\n");
  printf("\toption 1:read FASTA from the standard input, write "
	 "the DNA sequences to the standard output.\n");
  printf("\t       2:read FASTA from the standard input, write the RNA "
	 "sequences to the standard output.\n");
  printf("\t       3:read FASTA from the standard input, write the reverse "
	 "complement to the standard output.\n");
}

void 	display_help(char **av)
{
  int	i;

  i = 0;
  while (av[i] != NULL)
    {
      if (strcmp(av[i], "-h") == 0)
	{
	  print_h();
	  exit(0);
	}
      i++;
    }
}
