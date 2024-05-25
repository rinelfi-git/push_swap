/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:12 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 14:56:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	sb(t_array *stack)
{
	if (array_size(stack) <= 1)
		return ;
	array_add_at(stack, item_get(stack, 1), 0);
	ft_printstr("sb\n");
}
