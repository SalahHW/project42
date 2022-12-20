/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:24:16 by sbouheni          #+#    #+#             */
/*   Updated: 2022/11/26 16:31:28 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			length;
	unsigned char	*location;

	length = count * size;
	location = malloc(length);
	if (location)
	{
		ft_bzero(location, length);
		return (location);
	}
	errno = ENOMEM;
	return (NULL);
}
