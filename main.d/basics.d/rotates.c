/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:06 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:33:33 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	rotates(t_array *stk_a, t_array *stk_b)
{
	rotate(stk_a, 0);
	rotate(stk_b, 0);
	ft_printstr("rr\n");
}
