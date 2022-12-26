#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	length;
	
	length = ft_printf("%i\n", 150);
	ft_printf("%i\n", length);
	length = printf("%i\n", 150);
	printf("%i\n", length);
}
