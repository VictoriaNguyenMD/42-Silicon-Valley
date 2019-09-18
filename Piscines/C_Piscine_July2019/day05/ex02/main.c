#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *str1 = "hello";
	printf("My function: %d -> %d\n", ft_atoi(str1), atoi(str1));

	char *str2 = "042";
	printf("My function: %d -> %d\n", ft_atoi(str2), atoi(str2));

	char *str3 = "21.2";
	printf("My function: %d -> %d\n", ft_atoi(str3), atoi(str3));

        char *str4 = "000";
	printf("My function: %d -> %d\n", ft_atoi(str4), atoi(str4));

	char *str5 = "-32";
	printf("My function: %d -> %d\n", ft_atoi(str5), atoi(str5));
	
	char *str6 = "-";
	printf("My function: %d -> %d\n", ft_atoi(str6), atoi(str6));

	char *str7 = "+5";
	printf("My function: %d -> %d\n", ft_atoi(str7), atoi(str7));

	char *str8 = "217412421421849012";
	printf("My function: %d -> %d\n", ft_atoi(str8), atoi(str8));

	char *str9 = "-217412421421849012";
	printf("My function: %d -> %d\n", ft_atoi(str9), atoi(str9));

	char *str10 = "    -32";
	printf("My function: %d -> %d\n", ft_atoi(str10), atoi(str10));

	char *str11 = "   32 ht 0";
	printf("My function: %d -> %d\n", ft_atoi(str11), atoi(str11));

}
