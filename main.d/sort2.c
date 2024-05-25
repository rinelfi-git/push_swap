/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:47 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:39:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libs/ft_printf/ft_printf.h"

void	sort2(t_array *stack)
{
	int	items[2];

	items[0] = *((int *)item_get(stack, 0)->value);
	items[1] = *((int *)item_get(stack, 1)->value);
	if (items[1] < items[0])
	{
		swap(stack);
		ft_printstr("sa\n");
	}
}
