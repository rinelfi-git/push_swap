/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:46:53 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

void	print_stack(int i, t_item *item)
{
	t_item	*nearest;
	t_ps	*ps;
	t_ps	*lower;

	ps = (t_ps *) item->value;
	nearest = ps->nearest_lower;
	lower = 0;
	if (nearest)
		lower = (t_ps *) nearest->value;
	printf("[%d] %d > ", i, ps->value);
	if (!lower)
		printf("'X'\n");
	else
		printf("%d\n", lower->value);
}

int	main(int argc, char **argv)
{
	t_array	*stack_a;
	t_array	*stack_b;
	int			ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	stack_a = array_create(0);
	stack_b = array_create(0);
	while (ci < argc)
		array_add(stack_a, item_create(ps_create(ft_atoi(argv[ci++])), ps_free));
	push_swap(stack_a, stack_b);
	array_foreach(stack_a, print_stack);
	array_foreach(stack_b, print_stack);
	return (0);
}
// 5 2 7 1 6 3 9 4 8
