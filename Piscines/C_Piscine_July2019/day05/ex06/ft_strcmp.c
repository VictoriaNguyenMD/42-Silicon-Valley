/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:55:17 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/16 12:57:31 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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