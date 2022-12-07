/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 04:51:02 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/07 22:30:39 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_length(int number)
{
	int	length;
	int	temp;

	length = 0;
	temp = 1;
	while (temp <= number)
	{
		length++;
		temp *= 10;
	}
	return (length);
}

static int	get_last_digit(int number)
{
	int	last_digit;
	
	last_digit = number % 10;
	return (last_digit);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		i;

	i = number_length(n);
	number = malloc((i + 1) * sizeof(char));
	if (number)
	{
		number[i] = '\0';
		i--;
		while (i > 0)
		{
			while (n >= 10)
			{
				number[i] = get_last_digit(n) + '0';
				n = n / 10;
				i--;
			}
			number[i] = n + '0';
		}
		return (number);
	}
	return (NULL);
}
