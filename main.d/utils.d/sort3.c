/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 14:11:47 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"
#include "../../libs/libft/libft.h"

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
