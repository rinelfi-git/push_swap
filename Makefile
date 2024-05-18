CC = cc
CFLAGS = -Werror -Wextra -Wall
NAME = push_swap
DEL = rm -rf
MAIN_D = main.d
OPERATIONS	=	$(MAIN_D)/push.c \
				$(MAIN_D)/reverse_rotate.c \
				$(MAIN_D)/rotate.c \
				$(MAIN_D)/swap.c \
				$(MAIN_D)/double_reverse_rotate.c \
				$(MAIN_D)/double_rotate.c \
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

ARRAYLIST_D = ./libs/arraylist
ARRAYLIST_A = arraylist
ARRAYLIST_H = $(ARRAYLIST_D)/arraylist.h
ARRAYLIST_LIB = $(ARRAYLIST_D)/libarraylist.a

all	: $(NAME)

$(NAME): main.c $(OPERATIONS_O) $(PRINTF_LIB) $(FT_LIB) $(ARRAYLIST_LIB)
	$(CC) $(CFLAGS) main.c $(OPERATIONS_O) \
	-L$(FT_D) -l$(FT_A) \
	-L$(PRINTF_D) -l$(PRINTF_A) \
	-L$(ARRAYLIST_D) -l$(ARRAYLIST_A) \
	-o $(NAME)

$(PRINTF_LIB) : $(PRINTF_H)
	make -C $(PRINTF_D)

$(FT_LIB) : $(FT_H)
	make -C $(FT_D)

$(ARRAYLIST_LIB) : $(ARRAYLIST_H)
	make -C $(ARRAYLIST_D)

%.o					: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(DEL) $(OPERATIONS_O)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@
	make -C $(ARRAYLIST_D) $@

fclean : clean
	$(DEL) $(NAME)
	make -C $(FT_D) $@
	make -C $(PRINTF_D) $@
	make -C $(ARRAYLIST_D) $@

re : fclean all