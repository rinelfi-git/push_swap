/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:17:28 by erijania          #+#    #+#             */
/*   Updated: 2024/05/13 17:16:07 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libs/libft/libft.h"
void    swap(t_list **lst);
void    double_swap(t_list **lst1, t_list **lst2);
void    push(t_list **lst1, t_list **lst2);
void    rotate(t_list **lst);
void    double_rotate(t_list **lst1, t_list **lst2);
void    reverse_rotate(t_list **lst);
void    double_reverse_rotate(t_list **lst1, t_list **lst2);
#endif