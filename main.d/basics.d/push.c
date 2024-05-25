/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:55:43 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	push(t_array *stk_dest, t_array *stk_src, char op)
{
	if (!array_size(stk_src) || !stk_dest)
		return ;
	if (!array_size(stk_dest))
		array_add(stk_dest, item_remove(stk_src, 0));
	else
		array_add_at(stk_dest, item_remove(stk_src, 0), 0);
	ft_printf("p%c\n", op);
}
