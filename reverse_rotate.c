/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:53:13 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	reverse_rotate(t_int_array **lst)
{
	t_int_array	*last;

	if (!int_array_length(lst))
		return ;
	last = int_array_pop(lst);
	int_array_unshift(lst, last->content);
	free(last);
	last = 0;
}
