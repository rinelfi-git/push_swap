/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:12 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 16:55:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_arraylist **lst)
{
	t_arraylist	*first;
	t_arraylist	*second;

	if (arraylist_length(lst) <= 1)
		return ;
	first = *lst;
	second = first->next;
	first->next = second->next;
	*lst = second;
	second->next = first;
}
