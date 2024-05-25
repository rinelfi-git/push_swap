/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:34:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"
#include "../../libs/libft/libft.h"

void	sort3(t_array *stk)
{
	int	its[3];

	its[0] = *((int *)item_get(stk, 0)->val);
	its[1] = *((int *)item_get(stk, 1)->val);
	its[2] = *((int *)item_get(stk, 2)->val);
	if (its[0] < its[2] && its[1] > its[2])
	{
		reverse_rotate(stk, 'a');
		swap(stk, 'a');
	}
	else if (its[1] < its[0] && its[1] < its[2])
		swap(stk, 'a');
	else if (its[2] < its[0] && its[0] < its[1])
		reverse_rotate(stk, 'a');
	else if (its[1] < its[2] && its[2] < its[0])
		rotate(stk, 'a');
	else if (its[2] < its[1] && its[1] < its[0])
	{
		swap(stk, 'a');
		reverse_rotate(stk, 'a');
	}
}
