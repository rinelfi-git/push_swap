/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:10:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	push(t_arraylist **lst1, t_arraylist **lst2)
{
	t_arraylist	*first;

	if (!lst1 || arraylist_length(lst2) <= 0)
		return ;
	first = arraylist_shift(lst2);
	arraylist_unshift(lst1, first->content);
	free(first);
	first = 0;
}
