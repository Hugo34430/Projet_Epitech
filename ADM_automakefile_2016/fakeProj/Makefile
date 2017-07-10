PROJECT_DIR	=	fakeProj \

SOURCES_DIR	=	src \

SRCS		=		$(SOURCES_DIR)/main.c \
		$(SOURCES_DIR)/calc.c \

EXEC		=	fakeProj \

CC		=	clang \

CFLAGS		=	-I. -ftest-coverage	-I. -O2 \

LDFLAGS		=	 \

HEADERS_DIR	=	include \

LIBS_DIR	=	libs \

BCK_DIR		=	fakeProj_backUp \

ZIP		=	tar \

ZIPFLAGS	=	-cvvf \

UNZIP		=	tar \

UNZIPFLAGS	=	-xvf \

TAR_NAME	=	archive.tar \

NUM_FLAGS	=	@echo V2.1.1 \

RM		=	rm -f \

OBJS		=	$(SRCS:.c=.o) \

all :		$(EXEC)

archive:
		$(ZIP) $(ZIPFLAGS) $(TAR_NAME) $(SOURCES_DIR)$(SRCS)
		@echo $(TAR_NAME) file generated

revert:
		$(UNZIP) $(UNZIPFLAGS) $(TAR_NAME) $(SOURCES_DIR)$(SRCS)

delete:
		rm -f $(TAR_NAME)

num:
		$(NUM_FLAGS)

$(EXEC):	$(OBJS)
		cc $(OBJS) -o $(EXEC) $(CFLAGS)

clean:
	$(RM) $(OBJS) *.gcno

fclean:	clean
	$(RM) $(EXEC)

re:	fclean all

.PHONY:	clean fclean all re
