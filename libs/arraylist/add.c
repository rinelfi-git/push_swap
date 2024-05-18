/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:16:22 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:39:41 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

void	list_add(t_list *list, t_node *node)
{
	if (!list || !node)
		return ;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	node->next = 0;
	node->prev = list->last;
	list->last = node;
}

void	list_add_at(t_list *list, t_node *node, size_t index)
{
	size_t	i;
	t_node	*tmp;

	if (!list || !node)
		return ;
	tmp = list_get(list, index);
	if (!tmp)
		return ;
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	node->prev = tmp;
	if (tmp->next && tmp->next->next)
		node->next = tmp->next->next;
	else if (tmp->next)
	{
		node->next = 0;
		list->last = node;
	}
	tmp->next = node;
	
}
