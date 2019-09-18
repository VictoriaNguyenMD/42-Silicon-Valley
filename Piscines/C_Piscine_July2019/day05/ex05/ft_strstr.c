/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:45:11 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/16 17:41:50 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstr_helper(char *str, char *to_find, int i, int j)
{
	while (to_find[j] != '\0' && str[i] == to_find[j])
	{
		i++;
		j++;
	}
	if (to_find[j] == '\0')
	{
		return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*null_ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	null_ptr = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (ft_strstr_helper(str, to_find, i, j) == 1)
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (null_ptr);
}
