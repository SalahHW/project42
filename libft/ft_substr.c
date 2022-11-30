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

	s += start;
	new_str = malloc(len + 1);
	if (new_str)
	{
		ft_strlcpy(new_str, s, len + 1);
		return (new_str);
	}
	return (NULL);
}
