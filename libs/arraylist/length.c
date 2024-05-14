/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:47:10 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:10:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"

size_t	arraylist_length(t_arraylist **array)
{
	size_t		ret;
	t_arraylist	*loop;

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
