/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:46:21 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/05 18:43:38 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	get_size(unsigned long long ap)
{
	int	count;

	count = 0;
	if (ap != 0)
	{
		while (ap > 0)
		{
			ap /= 16;
			count++;
		}
		return (count + 2);
	}
	return (0);
}

static char	*fill_hexadecimal_str(char *str, int i, unsigned long long ap)
{
	int	digit;

	while (i > 1)
	{
		digit = ap % 16;
		if (digit < 10)
			str[i] = '0' + digit;
		else
			str[i] = 'a' + digit - 10;
		ap /= 16;
		i--;
	}
	str[1] = 'x';
	str[0] = '0';
	return (str);
}

int	ft_print_hexadecimal(unsigned long long ap)
{
	char	*hexadecimal_str;
	int		i;
	int		length;

	i = get_size(ap);
	if (i == 0)
	{
		if (ft_print_string("0x0") < 0)
			return (-2147483648);
		return (3);
	}
	hexadecimal_str = malloc(sizeof(char) * (get_size(ap) + 1));
	if (!hexadecimal_str)
		return (-2147483648);
	hexadecimal_str[i--] = '\0';
	fill_hexadecimal_str(hexadecimal_str, i, ap);
	if (ft_print_string(hexadecimal_str) < 0)
	{
		free(hexadecimal_str);
		return (-2147483648);
	}
	length = ft_strlen(hexadecimal_str);
	free(hexadecimal_str);
	return (length);
}
