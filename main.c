/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/07/08 14:20:28 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include "main.d/push_swap.h"
#include <stdlib.h>
#include <limits.h>

static char	**copy_args(char **argv, int size)
{
	char	**arr;
	int		i;

	arr = (char **) malloc(sizeof(char *) * size);
	if (!arr)
		exit (1);
	i = -1;
	while (++i < size && argv[i])
		arr[i] = ft_strdup(argv[i]);
	return (arr);
}

static char	**get_args(char **argv, int argc, int *count)
{
	char	**arg;
	int		i;
	char	*str;

	if (argc == 2)
	{
		arg = ft_split(argv[1], ' ');
		*count = count_words(argv[1], ' ');
	}
	else
	{
		arg = copy_args(argv + 1, argc);
		*count = argc - 1;
	}
	i = -1;
	while (++i < *count)
	{
		str = ft_strtrim(arg[i], " ");
		free(arg[i]);
		arg[i] = str;
	}
	return (arg);
}

static int	free_memory(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(arr[i++]);
	if (arr)
		free(arr);
	return (0);
}

static int	is_args_correct(char **arr, int size)
{
	int		i;
	int		j;
	long	to_int;

	i = -1;
	while (++i < size)
	{
		if (!ft_isnumeric(arr[i]))
			return (0);
		to_int = ft_atoi(arr[i]);
		if (to_int > ((long)INT_MAX))
			return (0);
		if (to_int < ((long)INT_MIN))
			return (0);
	}
	i = -1;
	j = -1;
	while (++i < size)
	{
		j = 0;
		while (++j < size)
			if (i != j && ft_atoi(arr[i]) == ft_atoi(arr[j]))
				return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_array	*stack[2];
	int		ci;
	int		count;
	int		nbr;
	char	**args;

	if (argc <= 1)
		return (0);
	args = get_args(argv, argc, &count);
	if (!is_args_correct(args, count))
	{
		ft_printstr("Error\n");
		return (free_memory(args, count));
	}
	ci = 0;
	stack[0] = array_create(0);
	stack[1] = array_create(0);
	while (ci < count)
	{
		nbr = (int)ft_atoi(args[ci++]);
		array_add(stack[0], item_create(ps_create(nbr), ps_free));
	}
	free_memory(args, count);
	return (push_swap(stack[0], stack[1]));
}
