/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:16:34 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:35:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	push(t_array *dest, t_array *src)
{
	if (!array_size(src) || !dest)
		return ;
	array_add_at(dest, item_remove(src, 0), 0);
}
