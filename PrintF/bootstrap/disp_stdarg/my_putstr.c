/*
** my_putstr.c for my_putstr in /home/hugo34/CPool_Day04
** 
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
** 
** Started on  Thu Oct  6 17:43:23 2016 Hugo Bleuzen
** Last update Wed Oct 12 19:41:16 2016 Hugo Bleuzen
*/

void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	a;

  a  = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
  return (0);
}
