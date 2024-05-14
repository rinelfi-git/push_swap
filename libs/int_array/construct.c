/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:37:22 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:16:39 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_array.h"
#include <stdlib.h>

t_int_array	**int_array_construct(void)
{
	t_int_array	**ret;

	ret = (t_int_array **) malloc(sizeof(t_int_array *));
	if (!ret)
		return (0);
	return (ret);
}
