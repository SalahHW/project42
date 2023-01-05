/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:00:08 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/05 20:10:58 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_unsigned_decimal(unsigned int ap)
{
	int		count;
	char	*unsigned_int_str;

	unsigned_int_str = ft_unsigned_itoa(ap);
	if (!(unsigned_int_str) || (ft_print_string(unsigned_int_str) < 0))
	{
		free(unsigned_int_str);
		return (-2147483648);
	}
	count = ft_strlen(unsigned_int_str);
	free(unsigned_int_str);
	return (count);
}
