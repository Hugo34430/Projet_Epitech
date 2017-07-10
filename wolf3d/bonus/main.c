/*
** main.c for main in /home/Documents/wolf3d/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Dec 16 10:57:04 2016  Hugo Bleuzen
** Last update Sun Jan 15 17:38:26 2017 Hugo Bleuzen
*/

#include "include/my.h"
#include "include/wolf.h"

t_my_framebuffer	  *my_frame_buffer_create(int width, int height)
{
  t_my_framebuffer	*framebuffer;

  framebuffer = malloc(sizeof(t_my_framebuffer));
  if (!framebuffer)
    return (NULL);
  framebuffer->pixels = malloc(sizeof(sfUint8) * width * height * 4);
  if (!framebuffer->pixels)
    {
      free(framebuffer);
      return NULL;
    }
  framebuffer->width = width;
  framebuffer->height = height;
  return (framebuffer);
}

void			set_buff_value(t_my_framebuffer *buffer, sfColor color,
				                  int start, int end)
{
  int			i;

  i = start * 4;
  while (i < (end * 4))
    {
      buffer->pixels[i++] = color.r;
      buffer->pixels[i++] = color.g;
      buffer->pixels[i++] = color.b;
      buffer->pixels[i++] = color.a;
    }
}

sfRenderWindow		  *create_window(char *name, int width, int height)
{
  sfRenderWindow* 	window;
  sfVideoMode 		  mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfClose, NULL);
  if (window == NULL)
    {
      exit(EXIT_FAILURE);
    }
  return window;
}

void			my_wolf(t_wolf wolf)
{
  t_my_framebuffer	*buffer;
  sfRenderWindow	  *window;
  sfTexture		      *texture;
  sfSprite		      *sprite;
  sfEvent 		      event;
  sfMusic           *music;

  music = sfMusic_createFromFile("nice_music.ogg");
  window = create_window("Wolf3d", SCREEN_WIDTH, SCREEN_HEIGHT);
  sprite = sfSprite_create();
  texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  buffer = my_frame_buffer_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  set_buff_value(buffer, sfCyan, 0, SCREEN_WIDTH * (SCREEN_HEIGHT / 2));
  set_buff_value(buffer, sfWhite, SCREEN_WIDTH * (SCREEN_HEIGHT / 2),
		              SCREEN_WIDTH * SCREEN_HEIGHT);
  sfSprite_setTexture(sprite, texture, sfTrue);
  sfMusic_play(music);
  while (sfRenderWindow_isOpen(window))
    {
      sfRenderWindow_clear(window, sfWhite);
      sfRenderWindow_drawSprite(window, sprite, NULL);
      sfTexture_updateFromPixels(texture, buffer->pixels, buffer->width,
                                  buffer->height, 0, 0);
      set_buff_value(buffer, sfBlue, 0, SCREEN_WIDTH * (SCREEN_HEIGHT / 2));
      set_buff_value(buffer, sfGreen, SCREEN_WIDTH * (SCREEN_HEIGHT / 2),
                      SCREEN_WIDTH * SCREEN_HEIGHT);
      view(buffer, &wolf);
      mov_player(&wolf);
      while (sfRenderWindow_pollEvent(window, &event))
	     {
	        if (event.type == sfEvtClosed)
	         sfRenderWindow_close(window);
	     }
      if (!music)
       return;
      sfRenderWindow_display(window);
    }
  sfMusic_destroy(music);
  sfRenderWindow_destroy(window);
}

int 			main(int ac, char **av)
{
  t_wolf		wolf;

  if (ac != 2)
    return (84);
  if (!(init_struct(&wolf, av[1])))
    return (84);
  my_wolf(wolf);
  return (0);
}
