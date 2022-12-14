/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:15:44 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/14 07:03:30 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while (is_white_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (ft_isdigit(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}
