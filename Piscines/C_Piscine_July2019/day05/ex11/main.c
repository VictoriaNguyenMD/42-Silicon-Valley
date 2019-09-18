#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char test1[] = "hellomyname3isBob";
	printf("My Function1: %d -> \n", ft_str_is_alpha(test1));

	char test2[] = "MoDIFYthisSTRing";
	printf("My Function1: %d -> \n", ft_str_is_alpha(test2));

	char test3[] = "WillthisProgrRamworkawesomeness";
	printf("My Function1: %d -> \n", ft_str_is_alpha(test3));

	char test4[] = "salut,comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("My Function1: %d -> \n", ft_str_is_alpha(test4));
}