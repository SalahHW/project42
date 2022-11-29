/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:52:38 by sbouheni          #+#    #+#             */
/*   Updated: 2022/11/29 23:55:28 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (start < ft_strlen(s))
	{
		s += start;
		if (len >= ft_strlen(s))
		{
			new_str = malloc(len);
			ft_strlcpy(new_str, s, len + 1);
		}
		else 
		{
			new_str = malloc(ft_strlen(s) + 1);
			ft_strlcpy(new_str, s, ft_strlen(s) + 1);
		}
		return (new_str);
	}
	return (NULL);
}
