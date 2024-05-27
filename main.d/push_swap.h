/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:11:22 by erijania         ###   ########.fr       */
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
int		ft_abs(int nbr);
int		count_words(const char *s, char c);
int		ft_isnumeric(char *str);
void	update_rotations(t_array *stk);
void	do_rotatate_all(t_array *s1, t_item *i1, t_array *s2, t_item *i2);
void	do_rotate_only(t_array *stk, t_item *it, char op);
void	do_last_rotate(t_array *stk);
#endif