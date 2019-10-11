/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 00:00:19 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 00:00:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates using malloc and returns fresh string ending with '\0'
**	Result of the concat of s1 and s2. If alloc fails, returns NULL
** Param: prefix string, suffix string
** Return: new string
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		clen;
	char	*s;

	clen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	s = (char*)malloc(sizeof(char) * (clen + 1));

	if (!s1 || !s2 || !s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s2))
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
