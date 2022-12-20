/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:41:57 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/20 17:51:58 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

int	ft_print_char(int ap)
{
	if (ap)
	{
		ft_putchar_fd(ap, 1);
		return (1);
	}
	return (0);
}
