/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 10:35:59 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	reverse_rotate(t_list *lst)
{
	int	size;

	size = list_size(lst);
	if (size <= 1)
		return ;
	list_add_at(lst, item_get(lst, size - 1), 0);
}
