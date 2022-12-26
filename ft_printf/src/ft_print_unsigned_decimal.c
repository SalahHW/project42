/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:00:08 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/26 15:16:50 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_unsigned_decimal(unsigned int ap)
{
	int	count;

	count = ft_strlen(ft_itoa(ap));
	ft_putstr_fd(ft_itoa(ap), 1);
	return (count);
}
