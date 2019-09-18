#include <unistd.h>
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("%d", ft_recursive_power(1, -10)); //Should output 0
	putchar('\n');

	printf("%d", ft_recursive_power(1, 0)); //Should output 1
	putchar('\n');

	printf("%d", ft_recursive_power(2, 5)); //Should output 32
	putchar('\n');

	printf("%d", ft_recursive_power(-2, 5)); //Should output -32
	putchar('\n');
}
