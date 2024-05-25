/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:36:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:34:15 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libs/ft_printf/ft_printf.h"
#include "../libs/libft/libft.h"

static int	exec_sort(t_array *list, char *com)
{
	if (ft_strncmp("sa", com, 2) == 0)
		swap(list);
	else if (ft_strncmp("ra", com, 2) == 0)
		rotate(list);
	else if (ft_strncmp("rra", com, 3) == 0)
		reverse_rotate(list);
	return (ft_printstr(com) + ft_printchar('\n'));
}

void	sort3(t_array *stack)
{
	int	items[3];

	items[0] = *((int *)item_get(stack, 0)->value);
	items[1] = *((int *)item_get(stack, 1)->value);
	items[2] = *((int *)item_get(stack, 2)->value);
	if (items[0] < items[2] && items[1] > items[2])
	{
		exec_sort(stack, "rra");
		exec_sort(stack, "sa");
	}
	else if (items[1] < items[0] && items[1] < items[2])
		exec_sort(stack, "sa");
	else if (items[2] < items[0] && items[0] < items[1])
		exec_sort(stack, "rra");
	else if (items[1] < items[2] && items[2] < items[0])
		exec_sort(stack, "ra");
	else if (items[2] < items[1] && items[1] < items[0])
	{
		exec_sort(stack, "sa");
		exec_sort(stack, "rra");
	}
}
