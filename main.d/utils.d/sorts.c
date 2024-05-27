/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:47 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:05:49 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	sort2(t_array *stk)
{
	int	its[2];

	its[0] = *((int *)item_get(stk, 0)->val);
	its[1] = *((int *)item_get(stk, 1)->val);
	if (its[1] < its[0])
		swap(stk, 'a');
}

void	sort3(t_array *stk)
{
	int	its[3];

	its[0] = *((int *)item_get(stk, 0)->val);
	its[1] = *((int *)item_get(stk, 1)->val);
	its[2] = *((int *)item_get(stk, 2)->val);
	if (its[1] > its[2] && its[2] > its[0])
	{
		reverse_rotate(stk, 'a');
		swap(stk, 'a');
	}
	if (its[2] > its[0] && its[0] > its[1])
		swap(stk, 'a');
	if (its[1] > its[0] && its[0] > its[2])
		reverse_rotate(stk, 'a');
	if (its[1] > its[2] && its[2] > its[1])
		rotate(stk, 'a');
	if (its[0] > its[1] && its[1] > its[2])
	{
		rotate(stk, 'a');
		swap(stk, 'a');
	}
}
