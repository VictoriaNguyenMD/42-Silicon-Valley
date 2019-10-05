/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:47:23 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 14:47:25 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies n bytes from the memory are src to memory area dst
** Returns: dst
*/

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *src != '\0')
	{
		dst[i] = src[i];
	}
	return dest;
}
