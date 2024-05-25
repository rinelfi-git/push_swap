/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 14:56:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	rra(t_array *stack_a)
{
	int	size;

	size = array_size(stack_a);
	if (size <= 1)
		return ;
	array_add_at(stack_a, item_get(stack_a, size - 1), 0);
	ft_printstr("rra\n");
}
