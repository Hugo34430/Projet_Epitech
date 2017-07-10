/*
** putstr.c for putstr in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:01:29 2016 Hugo Bleuzen
** Last update Fri Nov  4 16:49:53 2016 Hugo Bleuzen
*/
#include  <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int     my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
  {
    my_putchar(str[i]);
    i += 1;
  }
  return (0);
}

int   main(void)
{
  my_putstr("");
  my_putchar('\n');
  return (0);
}
