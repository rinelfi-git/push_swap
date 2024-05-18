/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/18 16:22:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libs/arraylist/arraylist.h"

int		push_swap(t_arraylist **a, t_arraylist **b);
void	swap(t_arraylist **lst);
void	double_swap(t_arraylist **lst1, t_arraylist **lst2);
void	push(t_arraylist **lst1, t_arraylist **lst2);
void	rotate(t_arraylist **lst);
void	double_rotate(t_arraylist **lst1, t_arraylist **lst2);
void	reverse_rotate(t_arraylist **lst);
void	double_reverse_rotate(t_arraylist **lst1, t_arraylist **lst2);
#endif