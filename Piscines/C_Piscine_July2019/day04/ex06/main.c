#include <unistd.h>
#include <stdio.h>
#include <time.h>

int ft_is_prime(int index);

int		main(void)
{
	clock_t t;
	t = clock();

	printf("%d", ft_is_prime(0)); //should display 0 'not prime'
	putchar('\n');

	printf("%d", ft_is_prime(1)); // should display 0 'not prime'
	putchar('\n');

	printf("%d", ft_is_prime(19)); //should display 1 'prime'
	putchar('\n');

	printf("%d", ft_is_prime(38)); //should display 0 'not prime'
	putchar('\n');

	printf("%d", ft_is_prime(23)); //should display 1 ' prime'
	putchar('\n');

	printf("%d", ft_is_prime(15)); //should display 0 'not prime'
	putchar('\n');

	printf("%d", ft_is_prime(37)); //should display 1 'prime'
	putchar('\n');

	printf("%d", ft_is_prime(45)); //should display 0 'not prime'
	putchar('\n');

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; //in seconds
	printf("Program took %f seconds to execute \n", time_taken);

	return (0);
}
