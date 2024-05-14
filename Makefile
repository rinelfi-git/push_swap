CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = push_swap
DEL = rm -rf

OPERATIONS =	push.c \
				reverse_rotate.c \
				rotate.c \
				swap.c \
				double_reverse_rotate.c \
				double_rotate.c \
				double_swap.c
OPERATIONS_O = $(OPERATIONS:.c=.o)

PRINTF_D = ./libs/ft_printf
PRINTF_A = ftprintf
PRINTF_H = $(PRINTF_D)/ft_printf.h
PRINTF_LIB = $(PRINTF_D)/libftprintf.a

FT_D = ./libs/libft
FT_A = ft
FT_H = $(FT_D)/libft.h
FT_LIB = $(FT_D)/libft.a

ARRAY_LIST_D = ./libs/int_array
ARRAY_LIST_A = int_array
ARRAY_LIST_H = $(ARRAY_LIST_D)/int_array.h
ARRAY_LIST_LIB = $(ARRAY_LIST_D)/libint_array.a

all	: $(NAME)

$(NAME): main.c $(OPERATIONS_O) $(PRINTF_LIB) $(FT_LIB) $(ARRAY_LIST_LIB)
	$(CC) $(CFLAGS) main.c $(OPERATIONS_O) \
	-L$(FT_D) -l$(FT_A) \
	-L$(PRINTF_D) -l$(PRINTF_A) \
	-L$(ARRAY_LIST_D) -l$(ARRAY_LIST_A) \
	-o $(NAME)

$(PRINTF_LIB) : $(PRINTF_H)
	make -C $(PRINTF_D)

$(FT_LIB) : $(FT_H)
	make -C $(FT_D)

$(ARRAY_LIST_LIB) : $(ARRAY_LIST_H)
	make -C $(ARRAY_LIST_D)

%.o					: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(DEL) $(OPERATIONS_O)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@
	make -C $(ARRAY_LIST_D) $@

fclean : clean
	$(DEL) $(NAME)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@
	make -C $(ARRAY_LIST_D) $@

re : fclean all