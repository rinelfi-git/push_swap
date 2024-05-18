/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:39:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 15:51:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <sys/types.h>

t_arraylist	*arraylist_get(t_arraylist **array, size_t index)
{
	size_t		i;
	t_arraylist	*elt;

	if (!array || !(*array) || ((ssize_t) index) < 0)
		return (0);
	i = 0;
	elt = *array;
	while (i < index && elt)
	{
		elt = elt->next;
		i++;
	}
	return (elt);
}