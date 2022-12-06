/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:20:00 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/06 18:54:44 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	word_counter(const char *str, char c)
{
	int		state;
	size_t	i;
	size_t	word_count;

	state = 0;
	i = 0;
	word_count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			state = 0;
		}
		else if (state == 0)
		{
			state = 1;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

static void	free_strings(char **substring, size_t count)
{
	while (count != 0)
	{
		free(*substring);
		substring--;
	}
	free(substring);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	count;
	char	**substring;

	i = 0;
	start = 0;
	count = 0;
	substring = malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (substring)
	{
		while (count < word_counter(s, c))
		{
			while (s[i] == c)
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			*substring = malloc(sizeof(ft_substr(s, start, i - start)));
			if (*substring)
				*substring = ft_substr(s, start, i - start);
			else
				free_strings(substring, count);
			substring += 1;
			count++;
		}
		*substring = NULL;
		return (substring -= count);
	}
	free_strings(substring, count);
	return (NULL);
}
