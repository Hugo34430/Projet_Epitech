/*
** my_put_pixel.c for wolf3d in /home/Documents/wolf3d/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Dec  8 10:40:13 2016 Hugo Bleuzen
** Last update Sun Jan 15 15:22:11 2017 Hugo Bleuzen
*/

#include "../include/wolf.h"

void	     	my_put_pixel(t_my_framebuffer *buffer, int x, int y,
                          sfColor color)
{
  int		    width;
  sfUint8*	pixels;

  if (x < 0 || x > buffer->width || y < 0 || y > buffer->height)
    return;
  width = buffer->width;
  pixels = buffer->pixels;
  pixels[(width * y + x) * 4] = color.r;
  pixels[(width * y + x) * 4 + 1] = color.g;
  pixels[(width * y + x) * 4 + 2] = color.b;
  pixels[(width * y + x) * 4 + 3] = color.a;
}
