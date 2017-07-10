##
## Makefile for wolf3d in /home/Documents/wolf3d/
##
## Made by Hugo Bleuzen
## Login   <hugo.bleuzen@epitech.eu>
##
## Started on  Sun Nov 27 00:51:28 2016 Hugo Bleuzen
## Last update Sun Jan 15 17:24:06 2017 Hugo Bleuzen
##

CC	= gcc

RM	= rm -f

SRCS	=	main.c											\
				bonus/src/get_file.c				\
				bonus/src/view.c						\
				src/my_draw_line.c					\
				src/my_put_pixel.c					\
				src/raycast.c								\
				src/move_forward.c

OBJS 	= 	$(SRCS:.c=.o)

CFLAGS	=	-I./include -L./lib -lmy -lc_graph_prog -lm

CFLAGS	+=	-W -Wall -Werror -Wextra -g3

NAME	=	wolf3d

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
