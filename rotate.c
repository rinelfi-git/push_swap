/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:53 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:01:11 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	rotate(t_arraylist **lst)
{
	t_arraylist	*first;

	if (!lst || !(*lst))
		return ;
	first = int_array_shift(lst);
	int_array_push(lst, first->content);
	free(first);
	first = 0;
}
