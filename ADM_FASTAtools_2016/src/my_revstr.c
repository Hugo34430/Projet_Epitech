/*
** my_revstr.c for my_revstr in /home/hugo/cours/Pisicine de Synthèse/ADM_palindrome_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Jun 16 19:21:18 2017 Hugo Bleuzen
** Last update Mar Jun 20 11:30:08 2017
*/

//#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char        *my_revstr(char *str)
{
    char    *reverse;
    int     i;
    int     j;

    j = 0;
    i = strlen(str) - 1;
    if (str == NULL)
        return (NULL);
    if (!(reverse = malloc(sizeof(char) * (strlen(str) + 1))))
        return (NULL);
    while (i >= 0)
    {
        reverse[j] = str[i];
        j++;
        i--;
    }
    reverse[j] = '\0';
    return (reverse);
}

/*int	main(int ac, char **av)
{
  (void)ac;
  char *str;

  str = my_revstr(av[1]);
  printf("%s\n", str);
}*/
