/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 17:54:51 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	pa(t_array *stack_a, t_array *stack_b)
{
	if (!array_size(stack_b) || !stack_a)
		return ;
	if (!array_size(stack_a))
		array_add(stack_a, item_remove(stack_b, 0));
	else
		array_add_at(stack_a, item_remove(stack_b, 0), 0);
	ft_printstr("pa\n");
}
