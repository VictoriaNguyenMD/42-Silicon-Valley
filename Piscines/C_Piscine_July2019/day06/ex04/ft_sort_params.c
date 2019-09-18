/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 23:23:58 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/17 23:30:13 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char n);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else
				return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		if (s1[i] == '\0')
			return (s2[i]);
		else
			return (s1[i]);
	}
	return (0);
}
int		main(int argc, char **argv)
{
	int index;

	index = 1;
	while (index <= argc)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			ft_swap(argv[index][0], argv[index + 1][0]);
			index = 1;
		}
		else
		{
			index++;
		}
	}
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
