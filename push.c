/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 13:00:57 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	push(t_int_array **lst1, t_int_array **lst2)
{
	t_int_array	*first;

	if (!lst1 || int_array_length(lst2) <= 0)
		return ;
	first = int_array_shift(lst2);
	int_array_unshift(lst1, first->content);
	free(first);
	first = 0;
}
