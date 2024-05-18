/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:47:10 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:31:39 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

size_t	list_length(t_list *list)
{
	size_t	i;
	t_node	*loop;

	if (!list)
		return (0);
	loop = list->first;
	i = 0;
	while (loop)
	{
		i++;
		loop = loop->next;
	}
	return (i);
}
