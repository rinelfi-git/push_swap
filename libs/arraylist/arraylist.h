/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:25:24 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 15:49:28 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYLIST_H
# define ARRAYLIST_H
# include <stddef.h>

typedef int					t_type;
typedef struct s_arraylist
{
	t_type				content;
	struct s_arraylist	*next;
} t_arraylist;
t_arraylist	**arraylist_construct(void);
t_arraylist	*arraylist_new(t_type content);
t_arraylist	*arraylist_last(t_arraylist **array);
t_arraylist	*arraylist_push(t_arraylist **array, t_type content);
t_arraylist	*arraylist_unshift(t_arraylist **array, t_type content);
t_arraylist	*arraylist_pop(t_arraylist **array);
t_arraylist	*arraylist_shift(t_arraylist **array);
t_arraylist	*arraylist_get(t_arraylist **array, int index);
size_t		arraylist_length(t_arraylist **array);
#endif