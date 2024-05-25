/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:48:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:52:54 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	count_only(int *move, int *rt)
{
	while (*rt < 0)
	{
		(*move)++;
		(*rt)++;
	}
	while (*rt > 0)
	{
		(*move)++;
		(*rt)--;
	}
}

static int	total_move(t_item *item)
{
	int		move;
	int		rts[2];
	t_ps	*near_low;

	move = 0;
	near_low = to_ps(to_ps(item)->low);
	rts[0] = to_ps(item)->rt;
	rts[1] = near_low->rt;
	while (rts[0] < 0 && rts[1] < 0)
	{
		move++;
		rts[0]++;
		rts[1]++;
	}
	while (rts[0] > 0 && rts[1] > 0)
	{
		move++;
		rts[0]--;
		rts[1]--;
	}
	count_only(&move, &rts[0]);
	count_only(&move, &rts[1]);
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
