/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 23:02:57 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 14:39:02 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	push_b_to_a(t_array *stk_b, t_array *stk_a)
{
	update_nearest(stk_b, stk_a);
	update_needed_rotation(stk_a);
	do_rotate_only(stk_a, to_ps(stk_b->first)->high, 'a');
	push(stk_a, stk_b, 'a');
}
