/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:20:00 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/02 22:50:52 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(const char *str, char separation)
{
	size_t	i;
	size_t	words;

	i = 0;
	while (str[i])
	{
		if (str[i] == separation)
			words++;
		i++;
	}
	if (i > 0)
		words++;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*temp_string;
	char	**substring;

	if (s && c)
	{
		i = 0;
		j = 0;
		k = 0;
		substring = malloc(word_counter(s, c)+ 1);
		if (substring)
		{
			while (s[i])
			{
				if (s[i] == c)
				{
					temp_string = malloc(sizeof(ft_substr(s, j, i)));	
					if (temp_string)
					{
						temp_string = ft_substr(s, j, i);
						j = i + 1;
						substring[k] = temp_string;
						k++;
					}
				}
				i++;
			}
		}
	}
	return (NULL);
}
