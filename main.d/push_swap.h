/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 10:36:39 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/chained_list/list.h"

int		push_swap(t_list *stack_a, t_list *stack_b);
void	swap(t_list *stack);
void	double_swap(t_list *stack_a, t_list *stack_b);
void	push(t_list *dest, t_list *src);
void	rotate(t_list *stack);
void	double_rotate(t_list *stack_a, t_list *stack_b);
void	reverse_rotate(t_list *lst);
void	double_reverse_rotate(t_list *stack_a, t_list *stack_b);
void	sort3(t_list *stack);
void	sort2(t_list *stack);
#endif