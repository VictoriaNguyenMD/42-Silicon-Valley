/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 00:21:03 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 00:21:06 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocate w/ malloc(3) and return copy of the str given as argument w/o
**	whitespaces at the beginner or at the end of the string. The following are
**	considered whitespaces: ' ', '\n', '\t'. If s has no whitespaces at beg
**	or the end, the fucntion returns a copy of s. If alloc fails, then NULL.
**	Param: str to trim
**	Return: fresh trimmed string or copy of s
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;

	len = (ft_strend(s) - ft_strstart(s) + 1);
	str = ft_strnew(len + 1);
	if (str)
		str = ft_strsub(s, (unsigned int)ft_strstart(s), (size_t)len);
	return (str);
}
