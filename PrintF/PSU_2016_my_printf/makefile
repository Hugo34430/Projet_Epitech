##
## makefile
##
## Made by Hugo Bleuzen
## Login   <hugo.bleuzen@epitech.eu>
##
## Started someday
## Last update another day
##

SRC =	src/putnbrbase.c 				\
	src/strlen.c					\
	src/putchar.c		 			\
	src/putstr.c					\
	src/putnbr.c					\
	src/disp_stdarg.c				\
	src/put_nbr_unsigned.c			\
	src/my_printf.c

OBJS =	$(SRC:.c=.o)

CC = gcc

CFLAGS = -W -Wall -ansi -pedantic

NAME  = libmy.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
