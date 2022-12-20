/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:52:36 by sbouheni          #+#    #+#             */
/*   Updated: 2022/11/25 16:35:29 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	unchar_c;
	unsigned char	*unchar_s;

	i = 0;
	unchar_c = (unsigned char)c;
	unchar_s = (unsigned char *)s;
	while (i < n)
	{
		if (unchar_s[i] == unchar_c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
