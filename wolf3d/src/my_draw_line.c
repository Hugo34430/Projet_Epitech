/*
** my_draw_line.c for wolf3d in /home/Documents/wolf3d/src
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzn@epitech.eu>
**
** Started on  Fri Nov 18 16:14:42 2016 Hugo Bleuzen
** Last update Sun Jan 15 17:28:33 2017 Hugo Bleuzen
*/

#include "../include/wolf.h"

void			my_draw_line(t_my_framebuffer *framebuffer, sfVector2i from,
		     								sfVector2i to, sfColor color)
{
  float		longueur;
  float		dx;
  float		dy;
  float		x;
  float		y;
  int			i;

  if (fabs((float)to.x - (float)from.x) >= fabs((float)to.y - (float)from.y))
    longueur = fabs((float)to.x - (float)from.x);
  else
    longueur = fabs((float)to.y - (float)from.y);
  dx = ((float)to.x - (float)from.x) / longueur;
  dy = ((float)to.y - (float)from.y) / longueur;
  x = (float)from.x + 0.5;
  y = (float)from.y + 0.5;
  i = 1;
  while (i <= longueur)
    {
      my_put_pixel(framebuffer, x, y, color);
      x += dx;
      y += dy;
      i++;
    }
}
