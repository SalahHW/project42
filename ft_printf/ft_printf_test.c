#include <stdio.h>

int	main(void)
{
	int	length;
	char *str = "Sello world!";
	
	length = ft_printf("%i\n", 150);
	ft_printf("%i\n", length);
	length = printf("%i\n", 150);
	printf("%i\n", length);
}
