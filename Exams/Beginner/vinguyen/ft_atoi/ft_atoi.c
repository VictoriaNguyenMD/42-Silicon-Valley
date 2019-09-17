int		ft_atoi(const char *str)
{
	int index = 0;
	float output = 0;
	int sign = 1;
	
	while(str[index] == ' ')
	{
		index++;
	}
	if(str[index] == '+')
	{
		index++;
	}
	if(str[index] == '-')
	{
		sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		output = (output * 10) + (str[index] - '0');
		index++;
	}
	return output * sign;
}
