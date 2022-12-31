/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:46:21 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/31 13:00:25 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	get_size(unsigned long long ap)
{
	int	count;

	count = 0;
	while (ap > 0)
	{
		ap /= 16;
		count++;
	}
	return (count);
}

int	ft_print_hexadecimal(unsigned long long ap)
{
	char	*hexadecimal_str;
	int		i;
	int		digit;
	int		size;

	i = 0;
	hexadecimal_str = malloc(sizeof(char) * (get_size(ap) + 1));
	while (ap > 0)
	{
		digit = ap % 16;
		if (digit < 10)
			hexadecimal_str[i] = '0' + digit;
		else
			hexadecimal_str[i] = 'a' + digit - 10;
		ap /= 16;
		i++;
	}
	if (i == 0)
	{
		hexadecimal_str[i] = '0';
		i++;
	}
	hexadecimal_str[i] = '\0';
	ft_putstr_fd("0x", 1);
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimal_str[i], 1);
		i--;
	}
	size = ft_strlen(hexadecimal_str) + 2;
	free(hexadecimal_str);
	return (size);
}
