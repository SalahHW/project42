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

static	char	*allocate_substring(char const *str, size_t start, size_t i)
{
	char	*allocated_substring;

	if ((allocated_substring = 
				malloc(sizeof (ft_substr(str, start, i - start)))))
	{
		allocated_substring = ft_substr(str, start, i - start);
		return (allocated_substring);
	}
	substring -= count;
	set_array_free(substring);
	return (NULL);
}

static	void	set_array_free(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
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
	if ((substring = malloc((word_counter(s, c) + 1) * sizeof(char *))))
	{
		while (count < word_counter(s, c))
		{
			while (s[i] == c)
				i++;
			start = i;
			while (s[i] != c && s[i])
				i++;
			*substring = allocate_substring(s, start, i);
			substring += 1;
			count++;
		}
		*substring = NULL;
		substring -= word_counter(s, c);
		return (substring);
	}
	substring -= count;
	set_array_free(substring);
	return (NULL);
}
