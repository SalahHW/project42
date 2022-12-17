/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:50:14 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/17 02:59:31 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;
	const char	*str;
	va_list		ap;

	va_start(ap, format);
	i = 0;
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
