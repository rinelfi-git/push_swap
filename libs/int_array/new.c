/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:53:37 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:17:29 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"
#include <stdlib.h>

t_int_array	*int_array_new(int content)
{
	t_int_array	*ret;

	ret = (t_int_array *) malloc(sizeof(t_int_array));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
