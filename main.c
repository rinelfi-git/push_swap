/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:16:58 by erijania         ###   ########.fr       */
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
		return (0);
	i = -1;
	while (++i < size && argv[i])
		arr[i] = ft_strdup(argv[i]);
	return (arr);
}

static char	**get_args(char **argv, int argc, int *count)
{
	char	**arg;
	int		i;

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
		arg[i] = ft_strtrim(arg[i], " ");
	return (arg);
}

static int	free_memory(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(arr[i++]);
	free(arr);
	return (0);
}

static int	is_args_correct(char **arr, int size)
{
	int	i;
	int	j;
	int	should_stop;

	i = 0;
	while (i < size)
	{
		should_stop = !ft_isnumeric(arr[i]);
		should_stop = should_stop || ft_atoi(arr[i]) >= INT_MAX;
		should_stop = should_stop || ft_atoi(arr[i]) <= INT_MIN;
		if (should_stop)
			return (0);
		i++;
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
	t_array	*stk_a;
	t_array	*stk_b;
	int		ci;
	int		count;
	char	**args;

	if (argc <= 1)
		return (1);
	args = get_args(argv, argc, &count);
	if (!is_args_correct(args, count))
	{
		ft_printstr("Error\n");
		return (free_memory(args, count));
	}
	ci = 0;
	stk_a = array_create(0);
	stk_b = array_create(0);
	while (ci < count)
		array_add(stk_a, item_create(ps_create(ft_atoi(args[ci++])), ps_free));
	free_memory(args, count);
	return (push_swap(stk_a, stk_b));
}
