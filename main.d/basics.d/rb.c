/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:53 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 14:56:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	rb(t_array *stack_b)
{
	if (array_size(stack_b) <= 1)
		return ;
	array_add(stack_b, item_remove(stack_b, 0));
	ft_printstr("rb\n");
}
