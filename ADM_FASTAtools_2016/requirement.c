/*
** requirement.c for requirement in /home/hugo/cours/Pisicine de Synthèse/ADM_FASTAtools_2016/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Jun 16 14:43:32 2017 Hugo Bleuzen
** Last update Feb Jun 19 10:03:38 2017
*/

char	*my_strcapitalize_synthesis(char *str)
{
  int	i;

  i = 0;
  if (str[i] >= 'a' && str[i] <= 'z')
    str[i] = str[i] - 32;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if ((str[i - 1] < 'a' || str[i - 1] > 'z') &&
	      (str[i - 1] < 'A' || str[i - 1] > 'Z') &&
	      (str[i - 1] < '0' || str[i - 1] > '9'))
	    str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
