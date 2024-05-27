/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:48:46 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:01:03 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_rotation(t_array *list, t_item *item)
{
	int	index;
	int	size;

	index = item_index_of(list, item);
	size = array_size(list);
	if (index < size / 2)
		return (index);
	return (index - size);
}

void	update_rotations(t_array *stk)
{
	t_item	*loop;

	loop = stk->first;
	while (loop)
	{
		to_ps(loop)->rt = get_rotation(stk, loop);
		loop = loop->next;
	}
}

void	do_rotate_only(t_array *stk, t_item *it, char op)
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

void	do_rotatate_all(t_array *s1, t_item *i1, t_array *s2, t_item *i2)
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

void	do_last_rotate(t_array *stk)
{
	update_nearest(stk, stk);
	update_rotations(stk);
	do_rotate_only(stk, stk->last, 'a');
}
