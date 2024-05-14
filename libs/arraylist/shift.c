/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:07:33 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:17:21 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

t_arraylist	*arraylist_shift(t_arraylist **array)
{
	t_arraylist	*element;

	if (!array || !(*array))
		return (0);
	element = *array;
	*array = element->next;
	element->next = 0;
	return (element);
}
