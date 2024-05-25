/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 19:30:54 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

void	print_stack(int i, t_item *item)
{
	printf("%d - ", i);
	if (!to_ps(item)->nearest_higher)
		printf("[X]");
	else
		printf("[%d]", to_ps(to_ps(item)->nearest_higher)->value);
	printf(" > {%d} > ", to_ps(item)->value);
	if (!to_ps(item)->nearest_lower)
		printf("[X]\n");
	else
		printf("[%d]\n", to_ps(to_ps(item)->nearest_lower)->value);
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
