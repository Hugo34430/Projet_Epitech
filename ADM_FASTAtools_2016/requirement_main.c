/*
** requirement_main.c for main_test in /home/hugo/cours/Pisicine de Synthèse/ADM_FASTAtools_2016/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Mon Jun 19 09:08:23 2017 Hugo Bleuzen
** Last update Mar Jun 20 11:59:28 2017
*/

#include <stdlib.h>
#include <string.h>

char* my_strcapitalize_synthesis(char *str);

int 	test_my_strcapitalize_synthesis(const char *expected,
					const char *value)
{
  int 	res;
  char 	*str;

  str = strdup(value);
  res = strncmp(expected, my_strcapitalize_synthesis(str), strlen(expected));
  free(str);
  return (res);
}

int	main(void)
{
  if (test_my_strcapitalize_synthesis("Couc Lol Hello World",
				      "couc lol hello world") != 0)
    return (__LINE__);
  if (test_my_strcapitalize_synthesis("Karim Le Grand Manitou",
				      "karim le grand manitou") != 0)
    return (__LINE__);
  if (test_my_strcapitalize_synthesis("Wesh Ici Ca Marche Normalement",
	"wesh ici ca marche normalement") != 0)
    return (__LINE__);
  if (test_my_strcapitalize_synthesis("Comment Ca Va ?",
				      "comment ca va ?") != 0)
    return (__LINE__);
  if (test_my_strcapitalize_synthesis("Correct", "correct") != 0)
    return (__LINE__);
  return (0);
}
