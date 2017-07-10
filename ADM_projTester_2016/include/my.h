/*
** my.h for my.h in /home/hugo/cours/Pisicine de Synthèse/ADM_projTester_2016/include/
**
** Made by Hugo Bleuzen
** Login   <hugo.bleuzen@epitech.eu>
**
** Started on  Tue Jun 20 16:18:02 2017 Hugo Bleuzen
** Last update Jul Jun 24 15:11:17 2017
*/

#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void  	free_tab(char **tab);
char 	*new_dir(char *str, char *str2);
int	cherch_directory(char *path, int loop);
char	*check_first(char *str);
int	erreur_management();

#endif /*MY_H_*/
