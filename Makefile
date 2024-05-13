CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = push_swap
DEL = rm -rf

PRINTF_D = ./libs/ft_printf
PRINTF_A = ftprintf
PRINTF_H = $(PRINTF_D)/ft_printf.h
PRINTF_LIB = $(PRINTF_D)/libftprintf.a

FT_D = ./libs/libft
FT_A = ft
FT_H = $(FT_D)/libft.h
FT_LIB = $(FT_D)/libft.a

all	: $(NAME)

$(NAME) : $(PRINTF_LIB) $(FT_LIB)

$(PRINTF_LIB) : $(PRINTF_H)
	make -C $(PRINTF_D)

$(FT_LIB) : $(FT_H)
	make -C $(FT_D)

push_swap: push_swap.c $(FT_LIB) $(PRINTF_LIB)
	$(CC) $(CFLAGS) $@.c -L$(PRINTF_D) -l$(PRINTF_A) -L$(FT_D) -l$(FT_A) -o $@

clean :
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@

fclean : clean
	$(DEL) $(NAME)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@

re : fclean all