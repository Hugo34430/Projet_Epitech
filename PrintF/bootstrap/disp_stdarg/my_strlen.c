/*
** my_strlen.c for my_strlen in /home/hugo34/CPool_Day04
**
** Made by Hugo Bleuzen
** Login   <hugo34@epitech.net>
**
** Started on  Thu Oct  6 19:51:57 2016 Hugo Bleuzen
** Last update Thu Nov 17 09:36:11 2016 Hugo Bleuzen
*/

int   	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}
