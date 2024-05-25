/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:44 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:55:04 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_3numbers(t_array *a)
{
	if (array_size(a) == 3)
		sort3(a);
	else if (array_size(a) == 2)
		sort2(a);
}

// static void	push_b_to_a(t_array *b, t_array *a)
// {
	
// }

// static void	push_b_to_a(t_array *b, t_array *a)
// {
	
// }

int	push_swap(t_array *stack_a, t_array *stack_b)
{
	int	i;

	i = 0;
	while (array_size(stack_a) > 3)
		push_a_to_b(stack_a, stack_b);
	sort_3numbers(stack_a);
	// while (array_size(stack_b) > 0)
	// 	push_b_to_a(stack_b, stack_b);
	return (0);
}
