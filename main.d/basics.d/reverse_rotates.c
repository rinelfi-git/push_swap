/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:33 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 22:19:01 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../../libs/ft_printf/ft_printf.h"

void	reverse_rotates(t_array *stk_a, t_array *stk_b)
{
	reverse_rotate(stk_a, 0);
	reverse_rotate(stk_b, 0);
	ft_printstr("rrr\n");
}
