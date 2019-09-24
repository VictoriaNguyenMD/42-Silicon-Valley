#include <stdio.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
	{
		len++;
	}
	return len;
}

#ifndef DEFINE
int main ()
{
	printf("0->%i\n", ft_strlen(""));
	printf("5->%i\n", ft_strlen("Hello"));
	printf("9->%i\n", ft_strlen("Hello Bob"));
	printf("15->%i\n", ft_strlen("Can You Do This"));
}
#endif