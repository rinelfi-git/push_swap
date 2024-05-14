/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:53:37 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:10:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arraylist.h"
#include <stdlib.h>

t_arraylist	*arraylist_new(t_type content)
{
	t_arraylist	*ret;

	ret = (t_arraylist *) malloc(sizeof(t_arraylist));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
