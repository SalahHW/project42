/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:23:41 by sbouheni          #+#    #+#             */
/*   Updated: 2022/11/29 19:28:59 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;

	new_str = malloc(ft_strlen(s1) + 1);
	if (new_str)
	{
		ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
		return (new_str);
	}
	errno = ENOMEM;
	return (NULL);
}
