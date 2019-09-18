#include <unistd.h>
#include <stdio.h>
#include <time.h>

int ft_find_next_prime(int index);

int		main(void)
{
	clock_t t;
	t = clock();

	printf("%d", ft_find_next_prime(2)); //should display 2 
	putchar('\n');

	printf("%d", ft_find_next_prime(4)); // should display 5
	putchar('\n');

	printf("%d", ft_find_next_prime(19)); //should display 19
	putchar('\n');

	printf("%d", ft_find_next_prime(36)); //should display 37
	putchar('\n');

	printf("%d", ft_find_next_prime(44)); //should display 47
	putchar('\n');

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; //in seconds
	printf("Program took %f seconds to execute \n", time_taken);

	return (0);
}
