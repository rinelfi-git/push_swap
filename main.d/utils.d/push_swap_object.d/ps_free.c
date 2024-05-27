/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:09:07 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:03:03 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdlib.h>

void	ps_free(void *ps)
{
	t_ps	*cast_ps;

	if (!ps)
		return ;
	cast_ps = (t_ps *) ps;
	free(cast_ps);
}
