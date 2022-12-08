/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:36:19 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/08 18:09:07 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long) n;
	if (number == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (number >= 0 && number < 10)
		ft_putchar_fd(number + '0', fd);
	else if (number < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(number * -1, fd);
	}
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}
