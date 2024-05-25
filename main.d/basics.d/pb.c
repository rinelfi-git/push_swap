/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 17:54:00 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	pb(t_array *stack_b, t_array *stack_a)
{
	if (!array_size(stack_a) || !stack_b)
		return ;
	if (!array_size(stack_b))
		array_add(stack_b, item_remove(stack_a, 0));
	else
		array_add_at(stack_b, item_remove(stack_a, 0), 0);
	ft_printstr("pb\n");
}
