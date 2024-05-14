/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/13 23:13:27 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "push_swap.h"
#include <stdlib.h>

void	*f_atoi(void *i)
{
	int	r;

	r = ft_atoi(i);
	i = &r;
	ft_printf("r is %d\n", r);
	ft_printf("i is %d\n", *((int *)i));
	return (i);
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	int		ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	a = 0;
	a = (t_list **) malloc(sizeof(t_list *));
	b = (t_list **) malloc(sizeof(t_list *));
	while (ci < argc)
		ft_lstadd_back(a, ft_lstnew(argv[ci++]));
	*b = ft_lstmap(*a, f_atoi, 0);
	while (*b)
	{
		ft_printf("%d\n", *((int *)(*b)->content));
		*b = (*b)->next;
	}
	return (0);
}
