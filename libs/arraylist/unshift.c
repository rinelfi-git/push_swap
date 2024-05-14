/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unshift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:51:57 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:01:11 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_arraylist	*int_array_unshift(t_arraylist **array, int content)
{
	t_arraylist	*element;

	if (!array)
		return (0);
	element = int_array_new(content);
	if (!element)
		return (0);
	element->next = (*array)->next;
	*array = element;
	return (element);
}
