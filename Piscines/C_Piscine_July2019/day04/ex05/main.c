#include <unistd.h>
#include <stdio.h>
#include <time.h>

int ft_sqrt(int index);

int		main(void)
{
	clock_t t;
	t = clock();

	printf("%d", ft_sqrt(-10)); //should display 0
	putchar('\n');

	printf("%d", ft_sqrt(0)); // should display 0
	putchar('\n');

	printf("%d", ft_sqrt(36)); //should display 6
	putchar('\n');

	printf("%d", ft_sqrt(7)); //should display nothing
	putchar('\n');

	printf("%d", ft_sqrt(28)); //should display nothing
	putchar('\n');

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; //in seconds
	printf("Program took %f seconds to execute \n", time_taken);

	return (0);
}
