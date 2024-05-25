/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:44 by erijania          #+#    #+#             */
/*   Updated: 2024/05/26 00:21:18 by erijania         ###   ########.fr       */
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

static t_item	*get_lowest(t_array *stack)
{
	t_item	*lowest;
	t_item	*loop;

	loop = stack->first;
	lowest = loop;
	while (loop)
	{
		if (to_ps(loop)->val < to_ps(lowest)->val)
			lowest = loop;
		loop = loop->next;
	}
	return (lowest);
}

int	push_swap(t_array *stk_a, t_array *stk_b)
{
	t_item	*lowest;

	lowest = get_lowest(stk_a);
	while (array_size(stk_a) > 3)
		push_a_to_b(stk_a, stk_b);
	sort_3numbers(stk_a);
	while (array_size(stk_b) > 0)
		push_b_to_a(stk_b, stk_a);
	while (stk_a->first != lowest)
		last_rotate(stk_a);
	return (0);
}
