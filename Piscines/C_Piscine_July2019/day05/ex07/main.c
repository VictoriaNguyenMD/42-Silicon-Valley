#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char test1[] = "hello";
	char find1[] = "hell";
	printf("My Function1: %d -> %d\n", ft_strncmp(test1, find1, 3), strncmp(test1, find1, 3));

	char test2[] = "hello";
	char find2[] = "tello";
	printf("My Function2: %d -> %d\n", ft_strncmp(test2, find2, 6), strncmp(test2, find2, 6));

	char test3[] = "lle";
	char find3[] = "lla";
	printf("My Function3: %d -> %d\n", ft_strncmp(test3, find3, 3), strncmp(test3, find3, 3));

	char test4[] = "test";
	char find4[] = "tzs";
	printf("My Function4: %d -> %d\n", ft_strncmp(test4, find4, 3), strncmp(test4, find4, 3));

	char test5[] = "2test";
	char find5[] = " tzs";
	printf("My Function5: %d -> %d\n", ft_strncmp(test5, find5, 2), strncmp(test5, find5, 2));

	char test6[] = "";
	char find6[] = "";
	printf("My Function6: %d -> %d\n", ft_strncmp(test6, find6, 1), strncmp(test6, find6, 1));

	char test7[] = "h";
	char find7[] = "hello";
	printf("My Function7: %d -> %d\n", ft_strncmp(test7, find7, 4), strncmp(test7, find7, 4));


	return 0;
}