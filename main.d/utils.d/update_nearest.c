/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_nearest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:18:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 19:37:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_item	*get_lower(t_array *stack, t_item *item)
{
	t_item	*loop;
	t_item	*lower;
	int		item_val;
	int		predicates[2];

	loop = stack->first;
	lower = 0;
	item_val = to_ps(item)->value;
	while (loop)
	{
		predicates[0] = to_ps(loop)->value > item_val;
		predicates[1] = !lower;
		predicates[1] = predicates[1] || to_ps(loop)->value > to_ps(lower)->value;
		if (predicates[0] && predicates[1])
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
	int		predicates[2];

	loop = stack->first;
	higher = 0;
	item_val = to_ps(item)->value;
	while (loop)
	{
		predicates[0] = to_ps(loop)->value < item_val;
		predicates[1] = !higher;
		predicates[1] = predicates[1] || to_ps(loop)->value < to_ps(higher)->value;
		if (predicates[0] && predicates[1])
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
		if (to_ps(loop)->value > to_ps(highest)->value)
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
		if (to_ps(loop)->value < to_ps(lowest)->value)
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
		to_ps(loop)->nearest_lower = get_lower(dest, loop);
		to_ps(loop)->nearest_higher = get_higher(dest, loop);
		if (!to_ps(loop)->nearest_lower)
			to_ps(loop)->nearest_lower = bigest;
		if (!to_ps(loop)->nearest_higher)
			to_ps(loop)->nearest_higher = lowest;
		loop = loop->next;
	}
}
