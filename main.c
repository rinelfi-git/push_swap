/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:55:37 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

void	print_stack(int i, t_item *item)
{
	printf("%d - ", i);
	if (!to_ps(item)->high)
		printf("[X]");
	else
		printf("[%d]", to_ps(to_ps(item)->high)->val);
	printf(" > {%d} > ", to_ps(item)->val);
	if (!to_ps(item)->low)
		printf("[X]\n");
	else
		printf("[%d]\n", to_ps(to_ps(item)->low)->val);
}

int	main(int argc, char **argv)
{
	t_array	*stack_a;
	t_array	*stack_b;
	t_item	*it;
	int		ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	stack_a = array_create(0);
	stack_b = array_create(0);
	while (ci < argc)
	{
		it = item_create(ps_create(ft_atoi(argv[ci++])), ps_free);
		array_add(stack_a, it);
	}
	push_swap(stack_a, stack_b);
	array_for_each(stack_a, print_stack);
	printf("-------------------\n");
	array_for_each(stack_b, print_stack);
	return (0);
}
// 5 2 7 1 6 3 9 4 8
