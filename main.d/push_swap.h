/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:47:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/chained_list/array.h"
# include <stdio.h>

typedef struct s_ps
{
	int		value;
	int		rotation;
	t_item	*nearest_lower;
} t_ps;
void	sa(t_array *stack);
void	sb(t_array *stack);
void	ss(t_array *stack_a, t_array *stack_b);
void	pa(t_array *stack_a, t_array *stack_b);
void	pb(t_array *stack_b, t_array *stack_a);
void	ra(t_array *stack);
void	rb(t_array *stack);
void	rrr(t_array *stack_a, t_array *stack_b);
void	rra(t_array *stack);
void	rrb(t_array *stack);
void	rrr(t_array *stack_a, t_array *stack_b);
t_ps	*ps_create(int value);
void	ps_free(void *ps);
int		push_swap(t_array *stack_a, t_array *stack_b);
void	sort3(t_array *stack);
void	sort2(t_array *stack);
int		get_rotation(t_array *list, t_item *item);
void	update_nearest_lower(t_array *src, t_array *dest);
t_item	*get_cheapest(t_array *stack);
t_ps	*to_ps(t_item *item);
void	push_a_to_b(t_array *stack_a, t_array *stack_b);
#endif