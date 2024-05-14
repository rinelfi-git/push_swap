/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:00:05 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:24:51 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

t_arraylist	*arraylist_pop(t_arraylist **array)
{
	t_arraylist	*last;
	t_arraylist	*before;

	if (!array || !(*array))
		return (0);
	last = *array;
	while (last->next)
	{
		before = last;
		last = last->next;
	}
	if (last == before)
		*array = 0;
	else
		before->next = 0;
	return (last);
}
