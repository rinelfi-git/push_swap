/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:39:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:38:19 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <sys/types.h>

t_node	*list_get(t_list *list, size_t index)
{
	size_t	i;
	t_node	*node;

	if (!list || ((ssize_t) index) < 0)
		return (0);
	i = 0;
	node = list->first;
	while (i < index && node)
	{
		node = node->next;
		i++;
	}
	if (i == index)
		return (node);
	return (0);
}
