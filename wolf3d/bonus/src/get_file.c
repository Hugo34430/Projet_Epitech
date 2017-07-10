/*
** get_file.c for get_file in /home/Documents/wireframe/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Dec  8 19:36:13 2016 Hugo Bleuzen
** Last update Sun Jan 15 18:00:18 2017 Hugo Bleuzen
*/

#include "../include/my.h"
#include "../include/wolf.h"

#define BUFF_SIZE 4096

int 	  get_size(char *path)
{
  char 	buffer[BUFF_SIZE];
  int 	fd;
  int	  i;
  int 	size;

  i = 0;
  size = 0;
  if ((fd = open(path, O_RDONLY)) == -1)
    return (84);
  while ((i = read(fd, buffer, BUFF_SIZE)))
    size += i;
  close(fd);
  return (size);
}

char	   *get_file_buffer(char *file)
{
  int	   fd;
  char	 *buffer;
  int    fileSize;

  fileSize = get_size(file);
  buffer = malloc(sizeof(char) * fileSize + 1);
  if ((fd = open(file, O_RDONLY)) == -1)
    return (NULL);
  read(fd, buffer, fileSize);
  buffer[fileSize] = 0;
  close(fd);
  return (buffer);
}

int	     get_measure(char *buffer, int *width, int *height)
{
  while (*buffer)
    {
      if (is_digit(*buffer))
	     {
	        (*width)++;
	         while (*buffer != ',' && *buffer != '\n')
	          buffer++;
	     }
      if (!*(buffer + 1))
	     return (1);
      if (*buffer == '\n' && !(*width = 0))
	     (*height)++;
      else if (*buffer != ',')
	     return (0);
      buffer++;
    }
  return (1);
}

int	     **get_int_tab(char *buffer, int width, int height)
{
  int	   **array;
  int	   i;
  int	   sub;

  array = malloc(sizeof(int*) * height);
  i = 0;
  while (i < height)
    {
      if (!(array[i] = malloc(sizeof(int) * width)))
	     return (NULL);
      sub = 0;
      while (sub < width)
	     {
	        if (is_digit(*buffer))
	         {
	            array[i][sub++] = my_getnbr(buffer);
	            while (is_digit(*buffer))
		            buffer++;
	         }
	        buffer++;
	     }
      i++;
    }
  return (array);
}

int	**get_map(char *file, int *width, int *height)
{
  char	*buffer;

  buffer = get_file_buffer(file);
  if (!get_measure(buffer, width, height))
    return (NULL);
  (*height)++;
  return (get_int_tab(buffer, *width, *height));
}
