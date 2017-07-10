/*
** char_is.c for lib/my in /home/Documents/wolf3d/lib/my/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Nov  3 21:49:59 2016 Hugo Bleuzen
** Last update Sun Jan 15 14:04:12 2017 Hugo Bleuzen
*/

int	is_uppercase_letter(char c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  return (0);
}

int	is_lowercase_letter(char c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  return (0);
}

int	is_letter(char c)
{
  if (is_uppercase_letter(c) == 1 || is_lowercase_letter(c) == 1)
    return (1);
  return (0);
}

int	is_digit(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

int	is_printable(char c)
{
  if (c >= ' ' && c <= '~')
    return (1);
  return (0);
}
