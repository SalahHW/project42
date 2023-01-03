#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	length;
	char *str = "Hello World!";
	
	length = ft_printf("%u, %s, %p, %c\n", -150, str, str, 'S');
	ft_printf("%i\n", length);
	length = printf("%u, %s, %p, %c\n", -150, str, str, 'S');
	printf("%i\n", length);
}
