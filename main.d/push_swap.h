/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/26 00:07:38 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/chained_list/array.h"
# include <stdio.h>

typedef struct s_ps
{
	int		val;
	int		rt;
	t_item	*low;
	t_item	*high;
}	t_ps;
void	swap(t_array *stk, char op);
void	swaps(t_array *stk_a, t_array *stk_b);
void	push(t_array *stk_dest, t_array *stk_src, char op);
void	rotate(t_array *stk, char op);
void	rotates(t_array *stk_a, t_array *stk_b);
void	reverse_rotate(t_array *stk, char op);
void	reverse_rotates(t_array *stk_a, t_array *stk_b);
t_ps	*ps_create(int value);
void	ps_free(void *ps);
int		push_swap(t_array *stk_a, t_array *stk_b);
void	sort3(t_array *stk);
void	sort2(t_array *stk);
int		get_rotation(t_array *list, t_item *item);
void	update_nearest(t_array *src, t_array *dest);
t_item	*get_cheapest(t_array *stk);
t_ps	*to_ps(t_item *item);
void	push_a_to_b(t_array *stk_a, t_array *stk_b);
void	push_b_to_a(t_array *stk_b, t_array *stk_a);
void	last_rotate(t_array *stk);
int		ft_abs(int nbr);
int		ft_min(int nbr1, int nbr2);
#endif