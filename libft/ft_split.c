#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	1;
	size_t	split_counter;
	char	*splited_string;
	char	*temp_string;
	char	*substring;

	if (s && c)
	{
		i = 0;
		split_counter = 0;
		while (s[i] && s[i] != c)
		{
			if (s[i] == c)
			{
				split_counter++;
				temp_string = malloc(sizeof (ft_substr(s, i - i, i -1)));	
				if (temp_string)
				{
					temp_string = ft_substr(s, i - i, i - 1);
				}
			}
			i++;
		}
		free(temp_string);
	}
	return (NULL);
}
