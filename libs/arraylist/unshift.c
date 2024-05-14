/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unshift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:51:57 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:15:42 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

t_arraylist	*arraylist_unshift(t_arraylist **array, int content)
{
	t_arraylist	*element;

	if (!array)
		return (0);
	element = arraylist_new(content);
	if (!element)
		return (0);
	element->next = *array;
	*array = element;
	return (element);
}
