/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:37:54 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/chained_list/array.h"
# include <stdio.h>

int		push_swap(t_array *stack_a, t_array *stack_b);
void	swap(t_array *stack);
void	double_swap(t_array *stack_a, t_array *stack_b);
void	push(t_array *dest, t_array *src);
void	rotate(t_array *stack);
void	double_rotate(t_array *stack_a, t_array *stack_b);
void	reverse_rotate(t_array *lst);
void	double_reverse_rotate(t_array *stack_a, t_array *stack_b);
void	sort3(t_array *stack);
void	sort2(t_array *stack);
#endif