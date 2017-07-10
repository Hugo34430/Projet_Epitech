int       my_put_nbr_base(unsigned int nbr, char *base)
{
  int   i;
  int   b;
  int   len;
  char  *str;
  int   c;

  i = 0;
  len = my_strlen(base);
  str = malloc(sizeof(char) * (100));
  while (nbr != 0)
  {
    b = nbr / len;
    c = b * len;
    if ((nbr - c) > len)
      str[i] = base[nbr - c];
    else if ((nbr - c) == len)
      str[i] = base[nbr - c];
    else
      str[i] = base[nbr - c];
    nbr = b;
    i = i + 1;
  }
  str[i + 1] = '\0';
  my_revstr(str);
  return (0);
}
