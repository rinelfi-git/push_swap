/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:12 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:23:29 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	swap(t_array *stk, char op)
{
	if (array_size(stk) <= 1)
		return ;
	array_add_at(stk, item_get(stk, 1), 0);
	if (op)
		ft_printf("s%c\n", op);
}
