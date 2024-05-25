/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:48:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:47:42 by erijania         ###   ########.fr       */
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
	int		move;
	t_ps	*nearest;

	move = 0;
	nearest = to_ps(to_ps(item)->nearest_lower);
	move += ft_abs(to_ps(item)->rotation);
	move += ft_abs(nearest->rotation);
	return (move);
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
