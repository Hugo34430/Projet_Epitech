/*
** my_put_nbr.c for my_put_nbr in /home/hugo34/CPool_Day04
**
** Made by Hugo Bleuzen
** Login   <hugo34@epitech.net>
**
** Started on  Tue Oct 11 13:59:51 2016 Hugo Bleuzen
** Last update Fri Nov 18 10:41:13 2016 Hugo Bleuzen
*/

void	my_putchar(char c);

void	my_put_nbr(int nb)
{
  int	a;

  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
     }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  a = (nb % 10);
    nb = (nb - a) / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + a);
        }
      else
        my_putchar(48 + nb % 10);
    }
}
