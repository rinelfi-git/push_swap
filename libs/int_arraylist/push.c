/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:41:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:31:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"
#include <stdio.h>

t_int_array	*int_array_push(t_int_array **array, int content)
{
	t_int_array	*element;
	t_int_array	*last;

	if (!array)
		return (0);
	element = int_array_new(content);
	if (!element)
		return (0);
	last = int_array_last(array);
	if (!last)
		*array = element;
	else
		last->next = element;
	return (element);
}
