/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/13 20:58:34 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **lst1, t_list **lst2)
{
	t_list	*first;

	if (!lst1 || !lst2 || ft_lstsize(*lst2) <= 0)
		return ;
	first = *lst2;
	*lst2 = (*lst2)->next;
	ft_lstadd_front(lst1, first);
}
