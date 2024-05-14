/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:41:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:01:11 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"
#include <stdio.h>

t_arraylist	*int_array_push(t_arraylist **array, int content)
{
	t_arraylist	*element;
	t_arraylist	*last;

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
