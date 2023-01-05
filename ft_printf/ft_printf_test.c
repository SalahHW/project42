/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:56:05 by sbouheni          #+#    #+#             */
/*   Updated: 2023/01/05 20:06:54 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		length;
	char	*str;

	str = "Hello World!";
	length = ft_printf("%x, %s, %p, %c\n", 0, str, str, 'S');
	ft_printf("%i\n", length);
	length = printf("%x, %s, %p, %c\n", 0, str, str, 'S');
	printf("%i\n", length);
}
