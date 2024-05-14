/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:37:22 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:10:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <stdlib.h>

t_arraylist	**arraylist_construct(void)
{
	t_arraylist	**ret;

	ret = (t_arraylist **) malloc(sizeof(t_arraylist *));
	if (!ret)
		return (0);
	return (ret);
}
