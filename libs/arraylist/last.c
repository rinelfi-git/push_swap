/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:45:45 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:38:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <stdlib.h>

t_arraylist	*arraylist_last(t_arraylist **array)
{
	t_arraylist	*loop;

	if (!array)
		return (0);
	loop = *array;
	while (loop && loop->next)
	{
		loop = loop->next;
	}
	return (loop);
}
