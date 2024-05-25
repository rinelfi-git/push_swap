/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:04:41 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 21:20:00 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

t_ps	*ps_create(int val)
{
	t_ps	*new;

	new = (t_ps *) malloc(sizeof(t_ps));
	if (!new)
		return (0);
	new->low = 0;
	new->high = 0;
	new->rt = 0;
	new->val = val;
	return (new);
}
