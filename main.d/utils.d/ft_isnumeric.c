/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:34:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/27 17:16:37 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libs/libft/libft.h"

int	ft_isnumeric(char *str)
{
	int	is_sign;

	while (*str)
	{
		is_sign = *str == '+' || *str == '-';
		is_sign = is_sign && !ft_isdigit(*(str + 1));
		is_sign = is_sign || (!is_sign && !ft_isdigit(*str));
		if (is_sign)
			return (0);
		str++;
	}
	return (1);
}
