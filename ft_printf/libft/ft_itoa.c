/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 04:51:02 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/11 20:04:10 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static int	number_length(int number)
{
	int		length;
	long	temp;
	long	n;

	n = (long)number;
	length = 0;
	temp = 1;
	if (is_negative(number) || number == 0)
	{
		length++;
		n = -n;
	}
	while (temp <= n)
	{
		length++;
		temp *= 10;
	}
	return (length);
}

static int	get_last_digit(int number)
{
	long	last_digit;
	long	n;

	n = (long)number;
	if (is_negative(n))
		n *= -1;
	last_digit = n % 10;
	return ((int)last_digit);
}

static char	*write_number(char *number, int i, int n)
{
	while (i >= 0)
	{
		number[i] = get_last_digit(n) + '0';
		n /= 10;
		i--;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		i;
	int		negative;

	negative = 0;
	i = number_length(n);
	number = malloc((number_length(n) + 1) * sizeof(char));
	if (number)
	{
		number[i] = '\0';
		if (is_negative(n))
		{
			n = -n;
			negative = 1;
		}
		i--;
		number = write_number(number, i, n);
		if (negative)
			number[0] = '-';
		return (number);
	}
	return (NULL);
}
