/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:57:47 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 00:57:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Appends string src to end of the dst. It will append at most dstsize - strlen(dst) -1
**	w/ a null terminator \0 unless dstsize = 0 or len(dst) > dstsize
**	If src & dst overlap, then the behavior is undefined
**	Unlike strncat, dstsize is the FULL size of dst, not the space remaining
** Input:
**		char * restrict dst, const char * restrict src, size_t dstsize
** Return:
**		total length of the string they tried to create (length of dest + length of src)
*/

/*
** If dstsize <= len(dst), then len(src) + dstsize, else len(src) + len(dst) to obtain the smallest destination output
*/

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if(dstsize <= i)
		len += dstsize;
	else
		len += i;
	while ((src[j] != '\0') && ((i + j) < dstsize - 1) && (dstsize > 0))
	{
		dst[(j + i)] = src[j];
		j++;
	}
	if (dstsize != 0 && (src[j] != '\0'))
	{
		dst[(j + i)] = '\0';
	}
	return (len);
}