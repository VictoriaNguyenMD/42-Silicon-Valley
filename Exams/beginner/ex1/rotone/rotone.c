#include <unistd.h>

void	rotone(char *str)
{
	while(*str)
	{
	if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
	{
		char out = *str + 1;
		write(1, &out, 1);
		str++;
	}
	else if (*str == 'z')
	{
		write(1, "z", 1);
		str++;
	}
	else if (*str == 'Z')
	{
		write(1, "A",1);
		str++;
	}
	else
	{
		write(1, str, 1);
		str++;
	}
	}	
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
		write (1, "\n", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
	return 1;
}
