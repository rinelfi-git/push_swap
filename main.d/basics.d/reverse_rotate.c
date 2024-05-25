/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:19:43 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	reverse_rotate(t_array *stk, char op)
{
	int	size;

	size = array_size(stk);
	if (size <= 1)
		return ;
	array_add_at(stk, item_get(stk, size - 1), 0);
	if (op)
		ft_printf("rr%c\n", op);
}
