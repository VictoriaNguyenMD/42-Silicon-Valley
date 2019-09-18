#include <string.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int		main(void)
{
	char test1[] = "AAAAAAA";
	printf("My Function1: %d -> \n", ft_str_is_uppercase(test1));

	char test2[] = "AABBBXCCCCFDSFS";
	printf("My Function1: %d -> \n", ft_str_is_uppercase(test2));

	char test3[] = "aAAA";
	printf("My Function1: %d -> \n", ft_str_is_uppercase(test3));

	char test4[] = "";
	printf("My Function1: %d -> \n", ft_str_is_uppercase(test4));
}
