/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:53:37 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:36:59 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <stdlib.h>

t_node	*node_new(t_type content)
{
	t_node	*node;

	node = (t_node *) malloc(sizeof(t_node));
	if (!node)
		return (0);
	node->c = content;
	node->next = 0;
	node->prev = 0;
	return (node);
}

t_list	*list_new(t_node **first)
{
	t_list	*list;

	list = (t_list *) malloc(sizeof(t_list));
	if (!list)
		return (0);
	if (first)
	{
		list->first = *first;
		list->last = *first;
	}
	else 
	{
		list->first = 0;
		list->last = 0;
	}
	return (list);
}
