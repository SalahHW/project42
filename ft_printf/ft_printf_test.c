#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	length;
	char *str = "Hello World!";
	
	length = ft_printf("%i, %s, %p\n", 150, str, str);
	ft_printf("%i\n", length);
	length = printf("%i, %s, %p\n", 150, str, str);
	printf("%i\n", length);
}
