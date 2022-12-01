#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		char *newstring;

		newstring = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (newstring)
		{
			ft_strlcat(newstring, s1, ft_strlen(s1) + 1);
			ft_strlcat(newstring, s2, ft_strlen(s2) + 1);
			return (newstring);
		}
	}
	return (NULL);
}
