/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:04:41 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:55:25 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

t_ps	*ps_create(int value)
{
	t_ps	*_ps_create;

	_ps_create = (t_ps *) malloc(sizeof(t_ps));
	if (!_ps_create)
		return (0);
	_ps_create->nearest_lower = 0;
	_ps_create->nearest_higher = 0;
	_ps_create->rotation = 0;
	_ps_create->value = value;
	return (_ps_create);
}
