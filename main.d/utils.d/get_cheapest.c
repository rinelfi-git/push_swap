/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:48:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 19:25:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	total_move(t_item *item)
{
	int		from_lower_move;
	int		from_higher_move;
	t_ps	*nearest_low;
	t_ps	*nearest_high;

	from_lower_move = ft_abs(to_ps(item)->rotation);
	from_higher_move = ft_abs(to_ps(item)->rotation);
	nearest_low = to_ps(to_ps(item)->nearest_lower);
	nearest_high = to_ps(to_ps(item)->nearest_higher);
	from_lower_move += ft_abs(nearest_low->rotation);
	from_higher_move += ft_abs(nearest_high->rotation);
	if (from_higher_move < from_lower_move)
		return (from_higher_move);
	return (from_lower_move);
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
