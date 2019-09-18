#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *str1 = "hello";
	char dest1[10];
	printf("My function: %s -> %s\n", ft_strcpy(dest1, str1), strcpy(dest1, str1));

	char *str2 = "042";
	char dest2[5];
	printf("My function: %s -> %s\n", ft_strcpy(dest2, str2), strcpy(dest2, str2));

	char *str3 = "21.2";
	char dest3[5];
	printf("My function: %s -> %s\n", ft_strcpy(dest3, str3), strcpy(dest3, str3));

    char *str4 = "000";
	char dest4[5];
	printf("My function: %s -> %s\n", ft_strcpy(dest4, str4), strcpy(dest4, str4));

   	char *str5 = "-3fsdf232";
	char dest5[100];
	printf("My function: %s -> %s\n", ft_strcpy(dest5, str5), strcpy(dest5, str5));
}