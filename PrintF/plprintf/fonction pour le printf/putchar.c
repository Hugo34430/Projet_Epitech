/*
** putchar.c for putchar in /home/hugo/Documents/plprintf/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Nov  4 12:01:53 2016 Hugo Bleuzen
** Last update Fri Nov  4 12:11:12 2016 Hugo Bleuzen
*/
int   putchar(char c)
{
  write (1, &c, 1);
  return (0);
}
