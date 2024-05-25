/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rotation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:47:07 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:11:13 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_rotation(t_array *list, t_item *item)
{
	int	index;
	int	size;

	index = item_index_of(list, item);
	size = array_size(list);
	if (index < size / 2)
		return (index);
	return (index - size);
}
