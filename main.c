/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:37:28 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_array	*stack_a;
	t_array	*stack_b;
	t_item	*loop_a;
	int			ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	stack_a = array_create(0);
	stack_b = array_create(0);
	while (ci < argc)
		array_add(stack_a, item_create(c_int(ft_atoi(argv[ci++])), free));
	push_swap(stack_a, stack_b);

	loop_a = stack_a->first;
	ft_printf("SORTED\n");
	while (loop_a)
	{
		ft_printf("%d\n", *((int *)loop_a->value));
		loop_a = loop_a->next;
	}
	return (0);
}
