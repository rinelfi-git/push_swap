/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:07:33 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:18:02 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_int_array	*int_array_shift(t_int_array **array)
{
	t_int_array	*element;

	if (!array)
		return (0);
	element = *array;
	*array = element->next;
	element->next = 0;
	return (element);
}
