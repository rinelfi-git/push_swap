/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:25:24 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:00:13 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYLIST_H
# define ARRAYLIST_H
# include <stddef.h>

typedef int	t_type;
typedef struct s_int_array	t_arraylist;
struct s_int_array
{
	t_type		content;
	t_arraylist	*next;
};
t_arraylist	**int_array_construct(void);
t_arraylist	*int_array_new(t_type content);
t_arraylist	*int_array_last(t_arraylist **array);
t_arraylist	*int_array_push(t_arraylist **array, t_type content);
t_arraylist	*int_array_unshift(t_arraylist **array, t_type content);
t_arraylist	*int_array_pop(t_arraylist **array);
t_arraylist	*int_array_shift(t_arraylist **array);
t_arraylist	*int_array_get(t_arraylist **array, int index);
size_t		int_array_length(t_arraylist **array);
#endif