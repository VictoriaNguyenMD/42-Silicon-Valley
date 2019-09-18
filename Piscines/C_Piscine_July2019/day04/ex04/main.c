#include <unistd.h>
#include <stdio.h>
#include <time.h>

int ft_fibonacci(int index);

int		main(void)
{
	clock_t t;
	t = clock();

	printf("%d", ft_fibonacci(-10)); //should display -1
	putchar('\n');

	printf("%d", ft_fibonacci(0)); // should display 0
	putchar('\n');

	printf("%d", ft_fibonacci(1)); //should display 1
	putchar('\n');

	printf("%d", ft_fibonacci(7)); //should display 13
	putchar('\n');

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; //in seconds
	printf("Program took %f seconds to execute \n", time_taken);

	return (0);
}
