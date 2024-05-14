/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:10:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_arraylist	**a;
	t_arraylist	*b;
	int			ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	a = 0;
	a = arraylist_construct();
	while (ci < argc)
		arraylist_push(a, ft_atoi(argv[ci++]));
	reverse_rotate(a);
	reverse_rotate(a);
	b = *a;
	while (b)
	{
		ft_printf("%d\n", b->content);
		b = b->next;
	}
	return (0);
}
