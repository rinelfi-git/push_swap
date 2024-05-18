/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:40:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>

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
	push_swap(a, b);

	loop_a = *a;
	loop_b = *b;
	ft_printf("A - B\n");
	while (loop_a || loop_b)
	{
		if (loop_a)
		{
			ft_printf("%d  ", loop_a->content);
			loop_a = loop_a->next;
		}
		if (loop_b)
		{
			ft_printf("%d", loop_b->content);
			loop_b = loop_b->next;
		}
		ft_printf("\n");
	}
	return (0);
}
