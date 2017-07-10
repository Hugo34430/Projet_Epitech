/*
** raycast.c for wolf3d in /home/Documents/wolf3d/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Jan  6 10:45:51 2017 Hugo Bleuzen
** Last update Sun Jan 15 15:22:20 2017 Hugo Bleuzen
*/

#include "../include/my.h"
#include "../include/wolf.h"

float		raycast(sfVector2f pos, float direction, int **map,
								sfVector2i mapSize)
{
  sfVector2f	new_pos;
  float		k;
  int		x;
  int		y;

  k = 0.01;
  x = floor(pos.x);
  y = floor(pos.y);
  while (x > 0 && x < mapSize.x && y > 0 && y < mapSize.y)
    {
      new_pos = move_forward(pos, direction, k);
      x = floor(new_pos.x);
      y = floor(new_pos.y);
      if (map[y][x] != 0)
	return (k);
      k += 0.01;
    }
  return (-1);
}
