/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:34:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 13:42:10 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/libft/libft.h"

int	ft_isnumeric(char *str)
{
	int	is_sign;

	while (*str)
	{
		is_sign = *str == '+' || *str == '-';
		if (is_sign && !ft_isdigit(*(str + 1)) || !is_sign && !ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
