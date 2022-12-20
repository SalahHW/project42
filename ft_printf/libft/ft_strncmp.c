/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:12:34 by sbouheni          #+#    #+#             */
/*   Updated: 2022/11/23 13:11:34 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{	
			if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) > 0)
				return (1);
			if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) < 0)
				return (-1);
		}
		i++;
	}
	return (0);
}
