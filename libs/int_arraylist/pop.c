/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:00:05 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:17:42 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_int_array	*int_array_pop(t_int_array **array)
{
	t_int_array	*last;
	t_int_array	*before_last;

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
