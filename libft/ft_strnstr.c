/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:58:10 by sbouheni          #+#    #+#             */
/*   Updated: 2022/11/26 15:06:14 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (len_needle <= 0)
		return ((char *)haystack);
	while ((i < len) && (len_needle <= ft_strlen(haystack)) && (haystack[i]))
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && needle[j] && haystack[i + j]
			&& i + j < len)
			j++;
		if (j == len_needle)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
