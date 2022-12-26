/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hexadecimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:51:29 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/26 15:22:52 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_lower_hexadecimal(unsigned long long int ap)
{
	char	hexadecimal_str[17];
	int		i;
	int		digit;

	i = 0;
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
	while (i-- >= 0)
		ft_putchar_fd(hexadecimal_str[i], 1);
	return (ft_strlen(hexadecimal_str) + 2);
}
