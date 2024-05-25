/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/26 00:21:30 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

void	show_rotations(int i, t_item *item)
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
	t_array	*stk_a;
	t_array	*stk_b;
	t_item	*it;
	int		ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	stk_a = array_create(0);
	stk_b = array_create(0);
	while (ci < argc)
	{
		it = item_create(ps_create(ft_atoi(argv[ci++])), ps_free);
		array_add(stk_a, it);
	}
	push_swap(stk_a, stk_b);
	// array_for_each(stk_a, show_rotations);
	// printf("-------------------\n");
	// array_for_each(stk_b, show_rotations);
	// printf("xxxxxxxxxxxxxxxxxxx\n");
	return (0);
}
// 5 2 7 1 6 3 9 4 8
