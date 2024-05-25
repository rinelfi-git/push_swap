/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:17:11 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_item	*loop_a;
	int			ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	stack_a = list_create(0);
	stack_b = list_create(0);
	while (ci < argc)
		list_add(stack_a, c_int(ft_atoi(argv[ci++])));
	push_swap(stack_a, stack_b);

	loop_a = stack_a->first;
	ft_printf("A - B\n");
	while (loop_a)
	{
		ft_printf("%d\n", *((int *)loop_a->value));
		loop_a = loop_a->next;
	}
	return (0);
}
