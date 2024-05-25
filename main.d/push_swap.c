/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:44 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:14:14 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3numbers(t_list *a)
{
	if (list_size(a) == 3)
		sort3(a);
	else if (list_size(a) == 2)
		sort(2);
}

static void	push_to_stack_b(t_list *a, t_list *b)
{
	if (a == b)
		return ;
}

int	push_swap(t_list *a, t_list *b)
{
	push_to_stack_b(a, b);
	sort_3numbers(a);
	return (0);
}
