#include "src/ft_printf.c"
#include <stdio.h>

int	main(void)
{
	int	length;
	char *str = "Hello world!";
	
	length = ft_printf(" %i \n", 189334);
	ft_printf("%i\n", length);
	printf("%i", length);
}
