/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:09:14 by erijania          #+#    #+#             */
/*   Updated: 2024/05/13 21:33:55 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_list	*ft_lstpop(t_list **lst)
{
	t_list	*last;
	t_list	*before_last;

	if (!lst || !(*lst))
		return (0);
	before_last = *lst;
	last = before_last->next;
	while (last->next)
	{
		before_last = last;
		last = before_last->next;
	}
	before_last->next = 0;
	return (last);
}
