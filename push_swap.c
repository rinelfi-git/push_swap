/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:09:54 by erijania          #+#    #+#             */
/*   Updated: 2024/05/13 16:03:42 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs/libft/libft.h"
#include "libs/ft_printf/ft_printf.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
    t_list  **a;
    t_list  *c;
    int     ci;

    if (argc <= 1)
        return (1);
    ci = 1;
    a = 0;
    a = (t_list **) malloc(sizeof(t_list *));
    while (ci < argc)
    {
        ft_lstadd_back(a, ft_lstnew(argv[ci]));
        ci++;
    }
    c = *a;
    while(c)
    {
        ft_printf("%d\n", ft_atoi(c->content));
        c = c->next;
    }
    return (0);
}