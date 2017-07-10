/*
** framebuffer.h for wireframe in /home/Documents/wireframe/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Thu Nov 17 16:57:39 2016 Hugo Bleuzen
** Last update Sun Jan 15 16:08:54 2017 Hugo Bleuzen
*/

#ifndef WOLF_H_
#define WOLF_H_

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Audio.h>

#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define PROJECTION_DISTANCE (SCREEN_WIDTH / 2) / tan((wolf->fov / 2) * M_PI / 180)
#define INC_ANGLE (wolf->fov / SCREEN_WIDTH)

typedef	struct		s_my_framebuffer
{
  sfUint8*	      pixels;
  int		          height;
 	int		          width;
}			            t_my_framebuffer;

typedef	struct		s_wolf
{
  sfVector2f		  pos;
  float			      direction;
  int			        **map;
  sfVector2i		  mapSize;
  float			      fov;
}			            t_wolf;

void			my_put_pixel(t_my_framebuffer*, int x, int y, sfColor);
void			my_draw_line(t_my_framebuffer*, sfVector2i, sfVector2i,
				                sfColor);
int			  **get_map(char *file, int *width, int *height);
int	    	my_put_map(char	*file, t_my_framebuffer *buffer);
void			mov_player(t_wolf *wolf);
float			raycast(sfVector2f pos, float direction, int **map,
			             sfVector2i mapSize);
sfVector2f		move_forward(sfVector2f pos, float direction,
				                    float distance);
int			      init_struct(t_wolf *wolf, char *map);
void			    view(t_my_framebuffer *buffer, t_wolf *wolf);

#endif
