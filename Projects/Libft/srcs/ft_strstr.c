/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:02:07 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 00:02:09 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of the null-terminated string needle in the haystack.
** const char *haystack, const char *needle)
** Return:
**		needle == '\0' -> haystack
**		needle not in haystack -> NULL
**		otherwise, pointer to first char of the first occurence of needle
*/

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *c1 = haystack;
	const char *c2 = needle;
	int traverse = 0;
	if (*needle == '\0')
		return ((char*) haystack);
	while (*c1 != '\0' && *c2 != '\0')
	{
		if (*c1 == *c2)
		{
			while (*(c1 + traverse) == *(c2 + traverse))
			{
				traverse++;
			}
			if (*(c2 + traverse) == '\0')
					return ((char*) c1);
		}
		c1++;
	}
	return (NULL);
}
