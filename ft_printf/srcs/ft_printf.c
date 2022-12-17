/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:50:14 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/17 17:17:29 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>

static void	evaluate_format(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar_fd(c, 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (c == 'p')
	{
		//print arg of void * in hexadec
	}
	else if (c == 'd')
	{
		// print decimal base 10
	}
	else if (c == 'i')
	{
		ft_putnbr_fd(va_arg(ap, int), 1);
	}
	else if (c == 'u')
	{
		// print unsigned decimal
	}
	else if (c == 'x')
	{
		// print hexadecimal lowercase
	}
	else if (c == 'X')
	{
		// print hexadecimal uppercase
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
	}
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	size;
	const char	*str;
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
				evaluate_format(format[i + 1], ap);
				i++;
			}
			else 
			{
				ft_putchar_fd(format[i], 1);
			}
			i++;
		}
	}
	va_end(ap);
	return (i);
}
