/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_nearest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:18:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 14:39:09 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_item	*get_lower(t_array *stack, t_item *item)
{
	t_item	*loop;
	t_item	*lower;
	int		it_val;
	int		bools[2];

	loop = stack->first;
	lower = 0;
	it_val = to_ps(item)->val;
	while (loop)
	{
		bools[0] = to_ps(loop)->val < it_val;
		bools[1] = !lower || to_ps(loop)->val > to_ps(lower)->val;
		if (bools[0] && bools[1])
			lower = loop;
		loop = loop->next;
	}
	return (lower);
}

static t_item	*get_higher(t_array *stack, t_item *item)
{
	t_item	*loop;
	t_item	*higher;
	int		item_val;
	int		bools[2];

	loop = stack->first;
	higher = 0;
	item_val = to_ps(item)->val;
	while (loop)
	{
		bools[0] = to_ps(loop)->val > item_val;
		bools[1] = !higher;
		bools[1] = bools[1] || to_ps(loop)->val < to_ps(higher)->val;
		if (bools[0] && bools[1])
			higher = loop;
		loop = loop->next;
	}
	return (higher);
}

static t_item	*get_highest(t_array *stack)
{
	t_item	*highest;
	t_item	*loop;

	loop = stack->first;
	highest = loop;
	while (loop)
	{
		if (to_ps(loop)->val > to_ps(highest)->val)
			highest = loop;
		loop = loop->next;
	}
	return (highest);
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

void	update_nearest(t_array *src, t_array *dest)
{
	t_item	*loop;
	t_item	*bigest;
	t_item	*lowest;

	loop = src->first;
	bigest = get_highest(dest);
	lowest = get_lowest(dest);
	while (loop)
	{
		to_ps(loop)->low = get_lower(dest, loop);
		to_ps(loop)->high = get_higher(dest, loop);
		if (!to_ps(loop)->low)
			to_ps(loop)->low = bigest;
		if (!to_ps(loop)->high)
			to_ps(loop)->high = lowest;
		loop = loop->next;
	}
}
