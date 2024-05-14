/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:00:05 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:01:11 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_arraylist	*int_array_pop(t_arraylist **array)
{
	t_arraylist	*last;
	t_arraylist	*before_last;

	if (!array || !(*array))
		return (0);
	before_last = *array;
	last = before_last->next;
	while (last->next)
	{
		before_last = last;
		last = before_last->next;
	}
	before_last->next = 0;
	return (last);
}
