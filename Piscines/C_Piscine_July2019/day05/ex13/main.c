#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int		main(void)
{
	char test1[] = "3213123213123";
	printf("My Function1: %d -> \n", ft_str_is_lowercase(test1));

	char test2[] = "aaaaaa";
	printf("My Function1: %d -> \n", ft_str_is_lowercase(test2));

	char test3[] = "aaa aaa aaa";
	printf("My Function1: %d -> \n", ft_str_is_lowercase(test3));

	char test4[] = "";
	printf("My Function1: %d -> \n", ft_str_is_lowercase(test4));
}
