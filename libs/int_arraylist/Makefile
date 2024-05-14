CC			=	cc
CFLAGS		=	-Werror -Wextra -Wall
AR			=	ar rcs
NAME		=	libint_array.a
HEADER		=	int_array.h
DEL			=	rm -rf
SOURCES		=	construct.c \
				last.c \
				new.c \
				pop.c \
				push.c \
				unshift.c
OBJECTS		=	$(SOURCES:.c=.o)

all					: $(NAME)

$(NAME)				: $(HEADER) $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o					: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean 				:
	$(DEL) $(OBJECTS)

fclean				: clean
	$(DEL) $(NAME)

re					: fclean all