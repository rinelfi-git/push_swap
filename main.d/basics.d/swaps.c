/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:25 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:23:54 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	swaps(t_array *stk_a, t_array *stk_b)
{
	swap(stk_a, 0);
	swap(stk_b, 0);
	ft_printstr("ss\n");
}
