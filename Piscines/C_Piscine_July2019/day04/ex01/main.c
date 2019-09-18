#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("%d", ft_recursive_factorial(-1));
	putchar('\n');

	printf("%d", ft_recursive_factorial(0));
	putchar('\n');

	printf("%d", ft_recursive_factorial(4));
	putchar('\n');
}
