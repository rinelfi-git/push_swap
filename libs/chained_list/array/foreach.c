/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foreach.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:01:10 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 16:03:48 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	array_foreach(t_array *array, void (*f)(int, t_item *))
{
	t_item	*item;
	int		i;

	item = array->first;
	i = 0;
	while (item)
	{
		f(i++, item);
		item = item->next;
	}
}