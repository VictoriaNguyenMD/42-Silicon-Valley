#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int nb = 10;
	ft_putnbr(nb);
	putchar('\n');

   nb = -5;
   ft_putnbr(nb);
   putchar('\n');

	nb = 0;
	ft_putnbr(nb);
	putchar('\n');

}
