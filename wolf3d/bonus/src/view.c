/*
** view.c for view in /home/Documents/wolf3d/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Sat Jan  7 18:44:16 2017 Hugo Bleuzen
** Last update Sun Jan 15 18:02:05 2017 Hugo Bleuzen
*/

#include "../include/my.h"
#include "../include/wolf.h"

void	mov_player(t_wolf *wolf)
{
  if (sfKeyboard_isKeyPressed(sfKeyUp))
    wolf->pos = move_forward(wolf->pos, wolf->direction, 0.05);
  if (sfKeyboard_isKeyPressed(sfKeyDown))
    wolf->pos = move_forward(wolf->pos, wolf->direction, - 0.05);
  if (sfKeyboard_isKeyPressed(sfKeyRight))
    wolf->direction += 1;
  if (sfKeyboard_isKeyPressed(sfKeyLeft))
    wolf->direction -= 1;
  if (sfKeyboard_isKeyPressed(sfKeyEscape))
      exit(1);
}

int		init_struct(t_wolf *wolf, char *map)
{
  wolf->mapSize.x = 0;
  wolf->mapSize.y = 0;
  if (!(wolf->map = get_map(map, &wolf->mapSize.x, &wolf->mapSize.y)))
    return (0);
  wolf->pos.x = wolf->mapSize.x / 2;
  wolf->pos.y = wolf->mapSize.y /2;
  wolf->direction = 90;
  wolf->fov = 60;
  return (1);
}

void		      colon_draw(t_my_framebuffer *buffer, int colon, int wall_high)
{
  sfVector2i	wall_top;
  sfVector2i	wall_bottom;

  wall_top.x = colon;
  wall_top.y = (SCREEN_HEIGHT / 2) - (wall_high / 2);
  wall_bottom.x = colon;
  wall_bottom.y = (SCREEN_HEIGHT / 2) + (wall_high / 2);
  my_draw_line(buffer, wall_top, wall_bottom, sfBlack);
}

void		  view(t_my_framebuffer *buffer, t_wolf *player)
{
  int		  colon;
  float		angle;
  float		distance;
  int		  wall_high;

  colon = 0;
  angle = player->direction - (player->fov / 2);
  while (colon < SCREEN_WIDTH)
    {
      if ((distance = raycast(player->pos, angle, player->map,
            player->mapSize)) == -1)
	      return;
      wall_high = SCREEN_HEIGHT / (distance);
      colon_draw(buffer, colon, wall_high);
      colon++;
      angle += player->fov / SCREEN_WIDTH;
    }
}
