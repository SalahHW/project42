/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 08:50:14 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/15 09:00:56 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *string, ...)
{
	int	i;

	i = 0;
	if (string)
	{
		while (string[i])
		{
			if (string[i] == '%')
			{
				check_converstion(string[i + 1]);
				i++;
			}
			i++;
		}
	}
	return (NULL);
}
