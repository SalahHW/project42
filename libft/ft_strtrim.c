#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (set && s1)
	{
		i = 0;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		j = ft_strlen(s1);
		while (j && ft_strrchr(set, s1[j]))
			j--;
		j = (j - i) + 1;
		return (ft_substr(s1, i, j));
	}
	return (NULL);
}
