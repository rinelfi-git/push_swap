CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = push_swap
DEL = rm -rf
MAIN_D = main.d
OPERATIONS	=	$(MAIN_D)/push.c \
				$(MAIN_D)/reverse_rotate.c \
				$(MAIN_D)/sort2.c \
				$(MAIN_D)/sort3.c \
				$(MAIN_D)/rotate.c \
				$(MAIN_D)/swap.c \
				$(MAIN_D)/double_reverse_rotate.c \
				$(MAIN_D)/double_rotate.c \
				$(MAIN_D)/push_swap.c \
				$(MAIN_D)/double_swap.c
OPERATIONS_O = $(OPERATIONS:.c=.o)

PRINTF_D = ./libs/ft_printf
PRINTF_A = ftprintf
PRINTF_H = $(PRINTF_D)/ft_printf.h
PRINTF_LIB = $(PRINTF_D)/libftprintf.a

FT_D = ./libs/libft
FT_A = ft
FT_H = $(FT_D)/libft.h
FT_LIB = $(FT_D)/libft.a

ARRAY_D = ./libs/chained_list
ARRAY_A = array
ARRAY_H = $(ARRAY_D)/array.h
ARRAY_LIB = $(ARRAY_D)/libarray.a

all	: $(NAME)

$(NAME): main.c $(OPERATIONS_O) $(PRINTF_LIB) $(FT_LIB) $(ARRAY_LIB)
	$(CC) $(CFLAGS) main.c $(OPERATIONS_O) \
	-L$(FT_D) -l$(FT_A) \
	-L$(PRINTF_D) -l$(PRINTF_A) \
	-L$(ARRAY_D) -l$(ARRAY_A) \
	-o $(NAME)

$(PRINTF_LIB) : $(PRINTF_H)
	make -C $(PRINTF_D)

$(FT_LIB) : $(FT_H)
	make -C $(FT_D)

$(ARRAY_LIB) : $(ARRAY_H)
	make -C $(ARRAY_D)

%.o					: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(DEL) $(OPERATIONS_O)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@
	make -C $(ARRAY_D) $@

fclean : clean
	$(DEL) $(NAME)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@
	make -C $(ARRAY_D) $@

re : fclean all