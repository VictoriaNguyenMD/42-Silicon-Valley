#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char test1[] = "AAAAAAA";
	printf("My Function1: %d -> \n", ft_str_is_printable(test1));

	char test2[] = "AAnulBBBXCCCCFDSFS";
	printf("My Function1: %d -> \n", ft_str_is_printable(test2));

	char test3[] = "aAAA";
	printf("My Funstxction1: %d -> \n", ft_str_is_printable(test3));

	char test4[] = "131415";
	printf("My Function1: %d -> \n", ft_str_is_printable(test4));
}

