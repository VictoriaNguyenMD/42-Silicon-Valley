#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char test1[] = "hello";
	char find1[] = "hell";
	printf("My Function: %s -> %s\n", ft_strstr(test1, find1), strstr(test1, find1));

	char test2[] = "hello";
	char find2[] = "test";
	printf("My Function: %s -> %s\n", ft_strstr(test2, find2), strstr(test2, find2));

	char test3[] = "hello";
	char find3[] = "llo";
	printf("My Function: %s -> %s\n", ft_strstr(test3, find3), strstr(test3, find3));

	char test4[] = "hel lo";
	char find4[] = "l lo";
	printf("My Function: %s -> %s\n", ft_strstr(test4, find4), strstr(test4, find4));

	char test5[] = "hel lo";
	char find5[] = "";
	printf("My Function: %s -> %s\n", ft_strstr(test5, find5), strstr(test5, find5));

	char test6[] = "";
	char find6[] = "l lo";
	printf("My Function: %s -> %s\n", ft_strstr(test6, find6), strstr(test6, find6));
}