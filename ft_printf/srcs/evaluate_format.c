/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:27:24 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/16 11:38:37 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	evaluate_format(const char c)
{
	if (c == 'c')
		ft_putchar_fd(c, 1);
	else if (c == 's')
	else if (c == 'p')
	else if (c == 'd')
	else if (c == 'i')
	else if (c == 'u')
	else if (c == 'x')
	else if (c == 'X')
	else if (c == '%')
}
