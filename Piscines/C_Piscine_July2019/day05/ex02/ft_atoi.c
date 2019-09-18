/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:31:04 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/16 09:50:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int answer;
	int sign;

	answer = 0;
	index = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == '\r' || str[index] == '\t'
			|| str[index] == '\n' || str[index] == '\v' || str[index] == '\f')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	while ((str[index] - '0' >= 0 && str[index] - '0' < 10))
	{
		answer *= 10;
		answer += (str[index] - '0');
		index++;
	}
	return (answer * sign);
}
