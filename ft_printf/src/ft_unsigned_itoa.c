/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:55:48 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/02 02:10:47 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	number_length(unsigned int number)
{
	int		length;
	long	temp;
	long	n;

	n = (long)number;
	length = 0;
	temp = 1;
	if (number == 0)
		length++;
	while (temp <= n)
	{
		length++;
		temp *= 10;
	}
	return (length);
}

static unsigned int	get_last_digit(unsigned int number)
{
	long	last_digit;
	long	n;

	n = (long)number;
	last_digit = n % 10;
	return ((unsigned int)last_digit);
}

static char	*write_number(char *number, int i, unsigned int n)
{
	while (i >= 0)
	{
		number[i] = get_last_digit(n) + '0';
		n /= 10;
		i--;
	}
	return (number);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*number;
	int		i;

	i = number_length(n);
	number = malloc((number_length(n) + 1) * sizeof(char));
	if (number)
	{
		number[i] = '\0';
		i--;
		number = write_number(number, i, n);
		return (number);
	}
	return (NULL);
}
