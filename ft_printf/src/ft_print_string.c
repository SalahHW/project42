/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:58:35 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/04 16:23:27 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_string(char *ap)
{
	int	count;
	char *null_str;

	count = 0;
	null_str = "(null).";
	if (ap)
	{
		while (ap[count])
		{
			ft_print_char(ap[count]);
			count++;
		}
	}
	else
	{
		while (null_str[count])
		{
			ft_print_char(null_str[count]);
			count++;
		}
	}
	return (count);
}
