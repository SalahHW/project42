/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:27:50 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/01 18:02:02 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;

	if (s1 && s2)
	{
		newstring = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (newstring)
		{
			*newstring = '\0';
			ft_strlcat(newstring, s1, ft_strlen(s1) + 1);
			ft_strlcat(newstring, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
			return (newstring);
		}
	}
	return (NULL);
}
