/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:49:57 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/20 17:35:58 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_integer(int ap)
{
	int	count;

	count = ft_strlen(ft_itoa(ap));
	ft_putstr_fd(ft_itoa(ap), 1);

	return (count);
}
