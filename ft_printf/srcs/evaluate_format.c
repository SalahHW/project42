/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:27:24 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/17 02:58:27 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	evaluate_format(const char c, va_list ap)
{
	if (c == 'c')
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
	else if (c == 's')
	{
		ft_putstr_fd(arg, 1);
	}
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
		// print integer
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
	return (0);
}
