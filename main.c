/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 13:08:12 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_int_array	**a;
	t_int_array	*b;
	int			ci;

	if (argc <= 1)
		return (1);
	ci = 1;
	a = 0;
	a = int_array_construct();
	while (ci < argc)
		int_array_push(a, ft_atoi(argv[ci++]));
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
