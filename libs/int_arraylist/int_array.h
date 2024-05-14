/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_array.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:25:24 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:19:14 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_ARRAY_H
# define INT_ARRAY_H

typedef struct s_int_array	t_int_array;
struct s_int_array
{
	int			content;
	t_int_array	*next;
};
t_int_array	**int_array_construct(void);
t_int_array	*int_array_new(int content);
t_int_array	*int_array_last(t_int_array **array);
t_int_array	*int_array_push(t_int_array **array, int content);
t_int_array	*int_array_unshift(t_int_array **array, int content);
t_int_array	*int_array_pop(t_int_array **array);
t_int_array	*int_array_shift(t_int_array **array);
t_int_array	*int_array_get(t_int_array **array, int index);
#endif