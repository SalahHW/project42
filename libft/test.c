#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[50] = "Anissa";
	char	str2[50] = "salutation";
	printf("%s\n", str);
	ft_memmove(str, str2, 2);
	printf("%s\n", str);
}

