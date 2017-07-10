##
## Makefile for Makefile in /home/hugo/cours/Pisicine de Synthèse/SBMLparser/
##
## Made by Hugo Bleuzen
## Login   <hugo.bleuzen@epitech.eu>
##
## Started on  Mon Jun 12 09:53:48 2017 Hugo Bleuzen
## Last update Apr Jun 21 10:57:54 2017
##

CC	= gcc

RM	= rm -f

SRCS	= ./src/main.c \
	  ./src/my_strtowordtab_synthesis.c \
	  ./src/my_reader.c \
	  ./src/print_tab.c \
	  ./src/check_print.c \
	  ./src/create_tab_balise.c \
	  ./src/my_sort.c \
	  ./src/clean.c

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
