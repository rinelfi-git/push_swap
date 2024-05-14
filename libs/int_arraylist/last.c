/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:45:45 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:27:44 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_int_array	*int_array_last(t_int_array **array)
{
	t_int_array	*loop;

	if (!array)
		return (0);
	loop = *array;
	while (loop && loop->next)
		loop = loop->next;
	return (loop);
}
