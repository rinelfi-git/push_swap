/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:55:55 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:22:05 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

void	item_destruct(t_item *item)
{
	if (!item)
		return ;
	if (item->f_value)
		item->f_value(item->value);
	free(item);
	item = 0;
}
