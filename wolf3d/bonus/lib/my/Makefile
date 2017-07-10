##
## Makefile for Makefile in /home/Documents/lib/my/
##
## Made by Hugo Bleuzen
## Login   <hugo.bleuzen@epitech.eu>
##
## Started on  Wed Nov  2 17:58:13 2016 Hugo Bleuzen
## Last update Sun Jan 15 14:05:38 2017 Hugo Bleuzen
##

SRCS		=	my_getnbr.c		\
					char_is.c			\

OBJS		=	$(SRCS:.c=.o)

CFLAGS		=	-W -Wall -Werror -Wextra

NAME		=	libmy.a

RM		=	rm -f

all:		$(NAME) copy

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

copy:
	cp $(NAME) ../
	cp my.h ../../include/
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
