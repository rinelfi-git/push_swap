/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unshift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:51:57 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:18:13 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_int_array	*int_array_unshift(t_int_array **array, int content)
{
	t_int_array	*element;

	if (!array)
		return (0);
	element = int_array_new(content);
	if (!element)
		return (0);
	element->next = (*array)->next;
	*array = element;
	return (element);
}
