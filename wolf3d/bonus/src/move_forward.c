/*
** move_forward.c for wolf3d in /home/Documents/wolf3d/src/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Fri Dec 16 11:01:07 2016 Hugo Bleuzen
** Last update Sun Jan 15 16:07:09 2017 Hugo Bleuzen
*/

#include "../include/wolf.h"

sfVector2f	  move_forward(sfVector2f pos, float direction, float distance)
{
  sfVector2f	new_pos;

  new_pos.x = pos.x + distance * cosf(direction * M_PI / 180);
  new_pos.y = pos.y + distance * sinf(direction * M_PI / 180);
  return (new_pos);
}
