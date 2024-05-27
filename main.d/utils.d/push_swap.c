/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:44 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:11:37 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_sorted(t_array *arr)
{
	int		initial;
	t_item	*loop;

	loop = arr->first;
	if (loop)
		initial = to_ps(loop)->val;
	while (loop)
	{
		if (to_ps(loop)->val < initial)
			return (0);
		initial = to_ps(loop)->val;
		loop = loop->next;
	}
	return (1);
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

static void	push_a_to_b(t_array *stack_a, t_array *stack_b)
{
	t_item	*top_a;

	if (array_size(stack_b) <= 1)
		push(stack_b, stack_a, 'b');
	else
	{
		update_nearest(stack_a, stack_b);
		update_rotations(stack_a);
		update_rotations(stack_b);
		top_a = get_cheapest(stack_a);
		do_rotatate_all(stack_a, top_a, stack_b, to_ps(top_a)->low);
		push(stack_b, stack_a, 'b');
	}
}

static void	push_b_to_a(t_array *stk_b, t_array *stk_a)
{
	update_nearest(stk_b, stk_a);
	update_rotations(stk_a);
	do_rotate_only(stk_a, to_ps(stk_b->first)->high, 'a');
	push(stk_a, stk_b, 'a');
}

int	push_swap(t_array *stk_a, t_array *stk_b)
{
	t_item	*lowest;

	if (!is_sorted(stk_a))
	{
		lowest = get_lowest(stk_a);
		while (array_size(stk_a) > 3)
			push_a_to_b(stk_a, stk_b);
		if (array_size(stk_a) == 3)
			sort3(stk_a);
		else if (array_size(stk_a) == 2)
			sort2(stk_a);
		while (array_size(stk_b) > 0)
			push_b_to_a(stk_b, stk_a);
		while (stk_a->first != lowest)
			do_last_rotate(stk_a);
	}
	array_destruct(stk_a);
	array_destruct(stk_b);
	return (0);
}
