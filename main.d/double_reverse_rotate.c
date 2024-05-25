/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_reverse_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:17:33 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:33:23 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_reverse_rotate(t_array *lst1, t_array *lst2)
{
	reverse_rotate(lst1);
	reverse_rotate(lst2);
}
