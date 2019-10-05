/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:30:28 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 14:35:29 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	writes n zeroed bytes to the string s. If n = zero, then nothing occurs
*/

void	bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ptr[i] = (void*)0;
		i++;
	}
}
