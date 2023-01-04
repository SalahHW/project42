/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:58:35 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/04 00:20:34 by sbouheni         ###   ########.fr       */
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
		while (ap[count])
		{
			ft_print_char(ap[count]);
			count++;
		}
	}
	return (count);
}
