/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 15:47:21 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

static void	push_twice(t_arraylist **a, t_arraylist **b)
{
	while (arraylist_length(a) > 3 && arraylist_length(b) < 2)
		push(b, a);
}

int	main(int argc, char **argv)
{
	t_arraylist	**a;
	t_arraylist	**b;
	t_arraylist	*loop_a;
	t_arraylist	*loop_b;
	int			ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	a = arraylist_construct();
	b = arraylist_construct();
	while (ci < argc)
		arraylist_push(a, ft_atoi(argv[ci++]));
	push_twice(a, b);

	loop_a = *a;
	loop_b = *b;
	ft_printf("A\t-\tB\n");
	while (loop_a || loop_b)
	{
		if (loop_a)
		{
			ft_printf("%d\t ", loop_a->content);
			loop_a = loop_a->next;
		}
		if (loop_b)
		{
			ft_printf("%d\t", loop_b->content);
			loop_b = loop_b->next;
		}
		ft_printf("\n");
	}
	return (0);
}
