/*
** strlen.c for strlen in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:01:05 2016 Hugo Bleuzen
** Last update Fri Nov  4 12:09:24 2016 Hugo Bleuzen
*/
int      my_strlen(char *str)
{
  int   a;

  a = 0;
  while (str[a] != '\0')
  {
    a = a + 1;
  }
  return (a)
}
