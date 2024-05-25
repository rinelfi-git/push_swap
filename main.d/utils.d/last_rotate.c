/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 00:00:57 by erijania          #+#    #+#             */
/*   Updated: 2024/05/26 00:20:47 by erijania         ###   ########.fr       */
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

void	last_rotate(t_array *stk)
{
	update_nearest(stk, stk);
	update_needed_rotation(stk);
	do_rotate_only(stk, stk->last, 'a');
	// array_for_each(stk, show_rotations);
	// printf("xxxxxxxxxxxxxxxxxxx\n");
}
