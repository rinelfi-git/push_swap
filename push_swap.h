/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/14 12:45:01 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libs/int_array/int_array.h"

void	swap(t_int_array **lst);
void	double_swap(t_int_array **lst1, t_int_array **lst2);
void	push(t_int_array **lst1, t_int_array **lst2);
void	rotate(t_int_array **lst);
void	double_rotate(t_int_array **lst1, t_int_array **lst2);
void	reverse_rotate(t_int_array **lst);
void	double_reverse_rotate(t_int_array **lst1, t_int_array **lst2);
#endif