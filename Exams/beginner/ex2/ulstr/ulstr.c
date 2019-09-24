#include <unistd.h>

void	reverse_caps(char *str)
{
	while(*str){
		if (*str >= 'a' && *str <= 'z')
		{
			char output = *str - 32;
			write(1, &output, 1);
		}
		else if(*str >= 'A' && *str <= 'Z')
		{
			char output = *str + 32;
			write(1, &output, 1);
		}
		else
		{
			write (1, str, 1);
		}
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		reverse_caps(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}