/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:47:10 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 13:01:13 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"

size_t	int_array_length(t_int_array **array)
{
	size_t		ret;
	t_int_array	*loop;

	if (!array || !(*array))
		return (0);
	loop = *array;
	ret = 0;
	while (loop)
	{
		ret++;
		loop = loop->next;
	}
	return (ret);
}
