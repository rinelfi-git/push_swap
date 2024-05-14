/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:41:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:10:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <stdio.h>

t_arraylist	*arraylist_push(t_arraylist **array, int content)
{
	t_arraylist	*element;
	t_arraylist	*last;

	if (!array)
		return (0);
	element = arraylist_new(content);
	if (!element)
		return (0);
	last = arraylist_last(array);
	if (!last)
		*array = element;
	else
		last->next = element;
	return (element);
}
