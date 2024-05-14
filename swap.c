/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:12 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:54:26 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_int_array **lst)
{
	t_int_array	*current;
	t_int_array	*next;

	if (int_array_length(lst) <= 1)
		return ;
	current = *lst;
	next = current->next;
	current->next = next->next;
	*lst = next;
	next->next = current;
}
