/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:30:14 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:55:46 by erijania         ###   ########.fr       */
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

static void	do_rotate_only(t_array *stk, t_item *it, char op)
{
	while (to_ps(it)->rt < 0)
	{
		reverse_rotate(stk, op);
		to_ps(it)->rt++;
	}
	while (to_ps(it)->rt > 0)
	{
		rotate(stk, op);
		to_ps(it)->rt--;
	}
}

static void	do_rotation(t_array *s1, t_item *i1, t_array *s2, t_item *i2)
{
	while (to_ps(i1)->rt < 0 && to_ps(i2)->rt < 0)
	{
		reverse_rotates(s1, s2);
		to_ps(i1)->rt++;
		to_ps(i2)->rt++;
	}
	while (to_ps(i1)->rt > 0 && to_ps(i2)->rt > 0)
	{
		rotates(s1, s2);
		to_ps(i1)->rt--;
		to_ps(i2)->rt--;
	}
	do_rotate_only(s1, i1, 'a');
	do_rotate_only(s2, i2, 'b');
}

static void	update_needed_rotation(t_array *stk)
{
	t_item	*loop;

	loop = stk->first;
	while (loop)
	{
		to_ps(loop)->rt = get_rotation(stk, loop);
		loop = loop->next;
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
		printf("-------------------\n");
		array_for_each(stack_b, show_rotations);
		top_a = get_cheapest(stack_a);
		// printf("CHEAPEST NUMBER IS %d\n", to_ps(top_a)->val);
		do_rotation(stack_a, top_a, stack_b, to_ps(top_a)->low);
		push(stack_b, stack_a, 'b');
	}
}
