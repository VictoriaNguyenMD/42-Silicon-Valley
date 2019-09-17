#include <unistd.h>

void	ft_print_numbers(void)
{
	int i = 0;
	while (i <= 9)
	{
		char output = i + '0';
		write(1, &output, 1);
		i++;
	}
}
