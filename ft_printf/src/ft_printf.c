/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:50:14 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/25 11:43:02 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	evaluate_format(char c, va_list ap, int size)
{
	if (c == 'c')
		size += ft_print_char(va_arg(ap, int));
	else if (c == 's')
		size += ft_print_string(va_arg(ap, char *));
	else if (c == 'p')
		size += ft_print_hexadecimal(va_arg(ap, unsigned long long int));
	else if (c == 'd')
		size += ft_print_integer(va_arg(ap, int));
	else if (c == 'i')
		size += ft_print_integer(va_arg(ap, int));
	else if (c == 'u')
		size += ft_print_unsigned_decimal(va_arg(ap, unsigned int));
	else if (c == 'x')
		size += ft_print_lower_hexadecimal(va_arg(ap, unsigned int));
	else if (c == 'X')
		size += ft_print_upper_hexadecimal(va_arg(ap, unsigned int));
	else if (c == '%')
		size += ft_print_percent();
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	size;
	va_list		ap;


	va_start(ap, format);
	i = 0;
	size = 0;
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				size += evaluate_format(format[i + 1], ap, size);
				i++;
			}
			else 
			{
				size += ft_print_char(format[i]);
			}
			i++;
		}
	}
	va_end(ap);
	return (size);
}
