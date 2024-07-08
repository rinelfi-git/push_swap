/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:34:58 by erijania          #+#    #+#             */
/*   Updated: 2024/07/08 14:20:09 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/libft/libft.h"

static int	ft_isnumber(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*(str++)))
			return (0);
	}
	return (1);
}

int	ft_isnumeric(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	return (ft_isnumber(str));
}
