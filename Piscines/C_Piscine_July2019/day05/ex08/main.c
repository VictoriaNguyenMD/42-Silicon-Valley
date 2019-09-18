#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char test1[] = "hello";
	printf("My Function1: %s -> \n", ft_strupcase(test1));

	char test2[] = "Modify this string";
	printf("My Function1: %s -> \n", ft_strupcase(test2));

	char test3[] = "h++   ell \n  o";
	printf("My Function1: %s -> \n", ft_strupcase(test3));
}