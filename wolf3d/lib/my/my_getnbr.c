/*
** my_getnbr.c for my_getnbr in /home/Documents/lib/my/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Nov  3 21:51:53 2016 Hugo Bleuzen
** Last update Sun Jan 15 15:28:23 2017 Hugo Bleuzen
*/

static int	is_digit(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

static int	get_sign(char c, int sign, int began)
{
  if (c == '-' && began == 0)
    sign = sign * -1;
  return (sign);
}

static int	to_int(char c)
{
  int		digit;

  digit = c - 48;
  return (digit);
}

static int	add_digit(int number, char c, int *began, int *stop)
{
  int		digit;

  if (is_digit(c) == 1)
    {
      digit = to_int(c);
      number = number * 10;
      number = number + digit;
      *began = 1;
    }
  else if (*began == 1)
    *stop = 1;
  return (number);
}

int	my_getnbr(char *str)
{
  int	i;
  int	sign;
  int	number;
  int	began;
  int	stop;

  i = 0;
  sign = 1;
  number = 0;
  began = 0;
  stop = 0;
  while (str[i] != '\0' && stop == 0)
    {
      if (began == 0 && is_digit(str[i]) == 0 && str[i] != '+' &&
	  str[i] != '-')
	return (0);
      sign = get_sign(str[i], sign, began);
      number = add_digit(number, str[i], &began, &stop);
      i = i + 1;
    }
  number = number * sign;
  return (number);
}
