/*
** main.c for main.c in /home/hugo/cours/Pisicine de Synthèse/ADM_projTester_2016/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Tue Jun 20 16:18:09 2017 Hugo Bleuzen
** Last update Jul Jun 24 15:14:15 2017
*/

#include <libgen.h>
#include "my.h"

void	printdir(int loop, char *str, char *path)
{
  int	x;

  x = 0;
  while (x++ != loop)
    printf("-----");
  printf("%s/\n", str);
  cherch_directory(new_dir(path, str), loop + 1);
}

void	printfile(int loop, char *str)
{
  int	x;

  x = 0;
  while (x++ != loop)
    printf("-----");
  printf("%s\n", str);
}

int		cherch_directory(char *path, int loop)
{
  struct dirent **namelist;
  int 		n;
  int 		i;

  i = 2;
  if (!(n = scandir(path, &namelist, 0, alphasort)))
      return (84);
  if (n < 0)
    return (84);
  else
    {
      if (loop == 1)
	printf("%s/\n", check_first(basename(path)));
      while (i < n)
	{
	  if (namelist[i]->d_type == DT_DIR)
	    printdir(loop, namelist[i]->d_name, path);
	  if (namelist[i]->d_type == DT_REG)
	    printfile(loop, namelist[i]->d_name);
	  i++;
	}
    }
  return (0);
}

int start_dir(char *path)
{
  return (cherch_directory(path, 1));
}

int     main(int ac, char **av)
{
  char	*base;

  if (ac <= 1)
    return (84);
  if (ac == 2)
    {
      base = strdup(av[1]);
      return (start_dir(base));
    }
  return (0);
}
