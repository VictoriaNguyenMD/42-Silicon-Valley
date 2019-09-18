#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char test1[] = "hellFFFo";
	printf("My Function1: %s -> \n", ft_strlowcase(test1));

	char test2[] = "MoDIFY this STRing";
	printf("My Function1: %s -> \n", ft_strlowcase(test2));

	char test3[] = "HAF++   EEKLOEell \n  o";
	printf("My Function1: %s -> \n", ft_strlowcase(test3));
}