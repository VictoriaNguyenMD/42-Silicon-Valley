/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:45:17 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/16 16:47:01 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphabet(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int		is_alphanumeric(char str)
{
	if ((str >= 'a' && str <= 'z') ||
		(str >= 'A' && str <= 'Z') || (str >= '0' && str <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	*new_str;

	index = 0;
	new_str = ft_strlowcase(str);
	while (new_str[index] != '\0')
	{
		if (!(is_alphanumeric(new_str[index - 1]) &&
			(is_alphabet(new_str[index]))))
		{
			if (new_str[index] >= 'a' && new_str[index] <= 'z')
			{
				new_str[index] -= 32;
			}
		}
		index++;
	}
	return (new_str);
}
