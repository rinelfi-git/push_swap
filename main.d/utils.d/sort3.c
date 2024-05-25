/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 16:29:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"
#include "../../libs/libft/libft.h"

void	sort3(t_array *stack)
{
	int	items[3];

	items[0] = *((int *)item_get(stack, 0)->value);
	items[1] = *((int *)item_get(stack, 1)->value);
	items[2] = *((int *)item_get(stack, 2)->value);
	if (items[0] < items[2] && items[1] > items[2])
	{
		rra(stack);
		sa(stack);
	}
	else if (items[1] < items[0] && items[1] < items[2])
		sa(stack);
	else if (items[2] < items[0] && items[0] < items[1])
		rra(stack);
	else if (items[1] < items[2] && items[2] < items[0])
		ra(stack);
	else if (items[2] < items[1] && items[1] < items[0])
	{
		sa(stack);
		rra(stack);
	}
}
