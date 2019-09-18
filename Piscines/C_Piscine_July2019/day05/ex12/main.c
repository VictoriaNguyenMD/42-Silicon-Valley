#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int		main(void)
{
	char test1[] = "3213123213123";
	printf("My Function1: %d -> \n", ft_str_is_numeric(test1));

	char test2[] = "321321 321321";
	printf("My Function1: %d -> \n", ft_str_is_numeric(test2));

	char test3[] = "gsgfd322";
	printf("My Function1: %d -> \n", ft_str_is_numeric(test3));

	char test4[] = "00000";
	printf("My Function1: %d -> \n", ft_str_is_numeric(test4));
}
