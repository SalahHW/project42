/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:58:35 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/27 15:35:17 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_string(char *ap)
{
	int	count;

	count = 0;
	if (ap)
	{
		count = ft_strlen(ap);
		ft_putstr_fd(ap, 1);
	}
	else
	{
		count = ft_strlen("(null)");
		ft_putstr_fd("(null)", 1);
	}
	return (count);
}
