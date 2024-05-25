/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:47 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:20:09 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	sort2(t_array *stk)
{
	int	its[2];

	its[0] = *((int *)item_get(stk, 0)->val);
	its[1] = *((int *)item_get(stk, 1)->val);
	if (its[1] < its[0])
		swap(stk, 'a');
}
