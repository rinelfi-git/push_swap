/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_nearest_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:18:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:45:42 by erijania         ###   ########.fr       */
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
		predicates[0] = to_ps(loop)->value < item_val;
		predicates[1] = !lower;
		predicates[1] = predicates[1] || to_ps(loop)->value > to_ps(lower)->value;
		if (predicates[0] && predicates[1])
			lower = loop;
		loop = loop->next;
	}
	return (lower);
}

void	update_nearest_lower(t_array *src, t_array *dest)
{
	t_item	*loop;
	t_item	*bigest;
	t_item	*lowest;

	loop = src->first;
	bigest = loop;
	while (loop)
	{
		to_ps(loop)->nearest_lower = get_lower(dest, loop);
		if (!to_ps(loop)->nearest_lower && array_size(src) > 1)
			lowest = loop;
		if (to_ps(loop)->value > to_ps(bigest)->value)
			bigest = loop;
		loop = loop->next;
	}
	if (bigest != lowest)
		to_ps(lowest)->nearest_lower = bigest;
}
