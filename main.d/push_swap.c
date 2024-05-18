/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:44 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:38:25 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3numbers(t_arraylist **a)
{
	if (arraylist_length(a) == 3)
	{
		if (arraylist_get(a, 0)->content > )
	}
}

static void	push_to_stack_b(t_arraylist **a, t_arraylist **b)
{
	while (arraylist_length(a) > 3)
	{
		push(b, a);
	}
}

int	push_swap(t_arraylist **a, t_arraylist **b)
{
	push_to_stack_b(a, b);
	sort_3numbers(a);
	return (0);
}
