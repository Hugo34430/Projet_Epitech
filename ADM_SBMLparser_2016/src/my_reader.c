/*
** my_reader.c for my_reader in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 12 19:29:28 2017 Hugo Bleuzen
** Last update Apr Jun 14 17:12:59 2017
*/

#include "my.h"

char		*my_reader(char *str)
{
  char 		*file;
  int		fd;
  struct 	stat buff;

  if ((fd = open(str, O_RDONLY)) == -1)
	return (NULL);
  stat(str, &buff);
  if (buff.st_size == 0)
    return (NULL);
  if ((file = malloc(sizeof(char) * (buff.st_size + 1))) == NULL)
      return (NULL);
  if (read(fd, file, buff.st_size) == -1)
      return (NULL);
  file[buff.st_size + 1] = '\0';
  close(fd);
  return (file);
}
