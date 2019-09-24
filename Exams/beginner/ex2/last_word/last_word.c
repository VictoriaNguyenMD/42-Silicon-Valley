#include <unistd.h>

void ft_print(char *str)
{
	while(*str && *str != ' ' && *str != '\t' && *str != '\0')
	{		
		write(1, str, 1);
		str++;
	}
}

int find_len(char *str)
{
	int len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}

void last_word(char *str)
{
	int i = find_len(str) - 1;
	int found = 0;
	while(i > 0 && found != 1)
	{
		if(str [i]!= ' ' & str[i] != '\t')
		{
			found = 1;
			while(str[i] != ' ' && str[i] != '\t')
			{
				i--;
			}
			ft_print(&str[i + 1]);
		}
		i--;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}