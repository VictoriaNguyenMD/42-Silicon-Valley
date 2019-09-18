#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char test1[] = "hello my name is Bob";
	printf("My Function1: %s -> \n", ft_strcapitalize(test1));

	char test2[] = "MoDIFY this STRing";
	printf("My Function1: %s -> \n", ft_strcapitalize(test2));

	char test3[] = "Will this ProgrRam work a nut ton awesomeness?";
	printf("My Function1: %s -> \n", ft_strcapitalize(test3));

	char test4[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("My Function1: %s -> \n", ft_strcapitalize(test4));
}