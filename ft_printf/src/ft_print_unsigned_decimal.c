/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:00:08 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/02 01:42:51 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_unsigned_decimal(unsigned int ap)
{
	int				count;
	char			*unsigned_decimal_str;

	unsigned_decimal_str = ft_unsigned_itoa(ap);
	count = ft_strlen(unsigned_decimal_str);
	ft_putstr_fd(unsigned_decimal_str, 1);
	free(unsigned_decimal_str);
	return (count);
}
