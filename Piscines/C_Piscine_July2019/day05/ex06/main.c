#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char test1[] = "hello";
	char find1[] = "hell";
	printf("My Function: %d -> %d\n", ft_strcmp(test1, find1), strcmp(test1, find1));

	char test2[] = "hello";
	char find2[] = "tello";
	printf("My Function: %d -> %d\n", ft_strcmp(test2, find2), strcmp(test2, find2));

	char test3[] = "llo";
	char find3[] = "lla";
	printf("My Function: %d -> %d\n", ft_strcmp(test3, find3), strcmp(test3, find3));

	char test4[] = "test";
	char find4[] = "tzs";
	printf("My Function: %d -> %d\n", ft_strcmp(test4, find4), strcmp(test4, find4));

	char test5[] = "2test";
	char find5[] = " tzs";
	printf("My Function: %d -> %d\n", ft_strcmp(test5, find5), strcmp(test5, find5));

	char test6[] = "";
	char find6[] = "";
	printf("My Function: %d -> %d\n", ft_strcmp(test6, find6), strcmp(test6, find6));


	char test7[] = "h";
	char find7[] = "hello";
	printf("My Function7: %d -> %d\n", ft_strncmp(test7, find7), strcmp(test7, find7));

	return 0;
}
