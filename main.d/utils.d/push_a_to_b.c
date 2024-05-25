/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:30:14 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 21:23:25 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	show_rotations(int i, t_item *item)
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

static void	do_rotation(t_array *stack, t_item *item, char op)
{
	while (to_ps(item)->rt != 0)
	{
		if (to_ps(item)->rt < 0)
		{
			reverse_rotate(stack, op);
			to_ps(item)->rt++;
		}
		else
		{
			rotate(stack, op);
			to_ps(item)->rt--;
		}
	}
}

static void	update_needed_rotation(t_array *list)
{
	t_item	*item;
	t_ps	*cast_ps;

	item = list->first;
	while (item)
	{
		cast_ps = (t_ps *) item->val;
		cast_ps->rt = get_rotation(list, item);
		item = item->next;
	}
}

void	push_a_to_b(t_array *stack_a, t_array *stack_b)
{
	t_item	*top_a;
	int		low_rotation;
	int		high_rotation;

	if (array_size(stack_b) <= 1)
		push(stack_b, stack_a, 'b');
	else
	{
		update_nearest(stack_a, stack_b);
		update_needed_rotation(stack_a);
		update_needed_rotation(stack_b);
		array_for_each(stack_a, show_rotations);
		array_for_each(stack_b, show_rotations);
		top_a = get_cheapest(stack_a);
		printf("CHEAPEST NUMBER IS %d\n", to_ps(top_a)->val);
		do_rotation(stack_a, top_a, 'a');
		low_rotation = to_ps(to_ps(top_a)->low)->rt;
		high_rotation = to_ps(to_ps(top_a)->high)->rt;
		if (ft_abs(low_rotation) < ft_abs(high_rotation))
			do_rotation(stack_b, to_ps(top_a)->low, 'b');
		else
			do_rotation(stack_b, to_ps(top_a)->high, 'b');
		push(stack_b, stack_a, 'b');
	}
}
