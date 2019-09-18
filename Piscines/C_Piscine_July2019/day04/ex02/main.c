#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("%d", ft_iterative_power(1, -10));
	putchar('\n');
	
	printf("%d", ft_iterative_power(1, 0));
	putchar('\n');
	
	printf("%d", ft_iterative_power(2, 5));
	putchar('\n');

	printf("%d", ft_iterative_power(-2, 5));
	putchar('\n');

}
