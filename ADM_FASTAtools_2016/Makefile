##
## Makefile for Makefile in /home/hugo/cours/Pisicine de Synthèse/ADM_palindrome_2016/
##
## Made by Hugo Bleuzen
## Login   <hugo.bleuzen@epitech.eu>
##
## Started on  Thu Jun 15 09:20:39 2017 Hugo Bleuzen
## Last update Mar Jun 20 12:21:28 2017
##

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c		\
	  ./src/my_reader.c 	\
	  ./src/print_h.c	\
	  ./src/modif_str.c     \
	  ./src/epur_str.c	\
	  ./src/my_revstr.c	\
	  ./src/verif_flags.c

OBJS 	= $(SRCS:.c=.o)

CFLAGS	+= -g3 -W -Wall -Wextra -Werror -I./include

NAME	= FASTAtools

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

test:	requirement_main.c requirement.c
	gcc -o requirement requirement_main.c requirement.c
	./requirement
