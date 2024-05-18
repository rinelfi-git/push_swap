/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraylist.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:25:24 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 17:14:51 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYLIST_H
# define ARRAYLIST_H
# include <stddef.h>

typedef int					t_type;
typedef	struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	t_type			c;
} t_node;
typedef	struct s_list
{
	t_node	*first;
	t_node	*last;
} t_list;
t_node	*node_new(t_type content);
void	list_add(t_list *list, t_node *node);
void	list_add_at(t_list *list, t_node *node, size_t index);
void	list_unshift(t_list *list, t_node *node);
t_node	*list_pop(t_list *list);
t_node	*list_shift(t_list *list);
t_node	*list_get(t_list *list, size_t index);
size_t	list_length(t_list *list);
#endif