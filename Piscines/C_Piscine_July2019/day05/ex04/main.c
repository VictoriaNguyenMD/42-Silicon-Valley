#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest1[40];
	char src1[40] = "hello";
	printf("My function: %s -> %s\n", ft_strncpy(dest1, src1, 4), strncpy(dest1, src1, 4));

	char dest2[40];
	char src2[40] = "042898998";
	printf("My function: %s -> %s\n", ft_strncpy(dest2, src2, 8), strncpy(dest2, src2, 8));

	char dest3[40];
	char src3[40] = "-3200";
	printf("My function: %s -> %s\n", ft_strncpy(dest3, src3, 2), strncpy(dest3, src3, 2));

	char dest4[40];
	char src4[40] = "217412421421849012";
	printf("My function: %s -> %s\n", ft_strncpy(dest4, src4, 8), strncpy(dest4, src4, 8));
}