/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:48:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 21:19:32 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	total_move(t_item *item)
{
	int		from_lower_move;
	int		from_higher_move;
	t_ps	*nearest_low;
	t_ps	*nearest_high;

	from_lower_move = ft_abs(to_ps(item)->rt);
	from_higher_move = ft_abs(to_ps(item)->rt);
	nearest_low = to_ps(to_ps(item)->low);
	nearest_high = to_ps(to_ps(item)->high);
	from_lower_move += ft_abs(nearest_low->rt);
	from_higher_move += ft_abs(nearest_high->rt);
	return (ft_min(from_higher_move, from_lower_move));
}

t_item	*get_cheapest(t_array *stack)
{
	t_item	*item;
	t_item	*cheapest;
	int		lowest;

	item = stack->first;
	cheapest = item;
	lowest = total_move(item);
	while (item)
	{
		if (total_move(item) < lowest)
		{
			lowest = total_move(item);
			cheapest = item;
		}
		item = item->next;
	}
	return (cheapest);
}
