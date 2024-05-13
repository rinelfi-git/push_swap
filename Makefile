CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = push_swap
DEL = rm -rf

OPERATIONS =	push.c \
				reverse_rotate.c \
				rotate.c \
				swap.c
OPERATIONS_O = $(OPERATIONS:.c=.o)

PRINTF_D = ./libs/ft_printf
PRINTF_A = ftprintf
PRINTF_H = $(PRINTF_D)/ft_printf.h
PRINTF_LIB = $(PRINTF_D)/libftprintf.a

FT_D = ./libs/libft
FT_A = ft
FT_H = $(FT_D)/libft.h
FT_LIB = $(FT_D)/libft.a

all	: $(NAME)

$(NAME): main.c $(OPERATIONS_O) $(PRINTF_LIB) $(FT_LIB)
	$(CC) $(CFLAGS) main.c $(OPERATIONS_O) -L$(FT_D) -l$(FT_A) -L$(PRINTF_D) -l$(PRINTF_A) -o $(NAME)

$(PRINTF_LIB) : $(PRINTF_H)
	make -C $(PRINTF_D)

%.o					: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

$(FT_LIB) : $(FT_H)
	make -C $(FT_D) bonus

clean :
	$(DEL) $(OPERATIONS_O)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@

fclean : clean
	$(DEL) $(NAME)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@

re : fclean all