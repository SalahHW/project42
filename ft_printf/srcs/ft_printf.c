/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:50:14 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/16 11:21:39 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				evaluate_fomat(format[i + 1]);
				i++;
			}
			else 
			{
				ft_putchar_fd(format[i], 1);
			}

			i++;
		}
	}
	return (i);
}
