##
## Makefile for Makefile in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/
##
## Made by Hugo Bleuzen
## Login   <hugo.bleuzen@epitech.eu>
##
## Started on  Mon Jun 12 09:53:48 2017 Hugo Bleuzen
## Last update May Jun 22 15:30:09 2017
##

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c 			\
	  ./src/tools.c

OBJS 	= $(SRCS:.c=.o)

CFLAGS	+= -W -Wall -Wextra -Werror -I./include

NAME	= projTester

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
