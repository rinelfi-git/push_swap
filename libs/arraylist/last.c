/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:45:45 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:01:11 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

t_arraylist	*int_array_last(t_arraylist **array)
{
	t_arraylist	*loop;

	if (!array)
		return (0);
	loop = *array;
	while (loop && loop->next)
		loop = loop->next;
	return (loop);
}
