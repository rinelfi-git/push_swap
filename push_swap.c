/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/13 15:42:36 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"

int main(int argc, char **argv)
{
    t_list  **a;
    int     ci;
    int     nbr;

    if (argc <= 1)
        return (1);
    ci = 1;
    a = 0;
    while (ci <= argc)
    {
        nbr = ft_atoi(argv[ci]);
        ft_lstadd_back(a, ft_lstnew(&nbr));
        ci++;
    }
    while(*a)
    {
        ft_printf("%d\n", (*a)->content);
        *a = (*a)->next;
    }
    return (0);
}