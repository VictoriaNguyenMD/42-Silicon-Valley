/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:51:07 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/19 19:39:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** Test Code for tolower
*/

int	main(void)
{
	printf("tolower: a -> %c", ft_tolower('a'));
	printf("tolower: a -> %c", ft_tolower('a'));
	printf("tolower: a -> %c", ft_tolower(65));
	printf("tolower: 1 -> %c", ft_tolower('1'));
	printf("tolower: 0 -> %c", ft_tolower(48));
	return (1);
}

/*
** Test Code for toupper
*/

int	main(void)
{
	printf("tolower: A -> %c", ft_tolower('a'));
	printf("tolower: A -> %c", ft_tolower('a'));
	printf("tolower: A -> %c", ft_tolower(65));
	printf("tolower: 1 -> %c", ft_tolower('1'));
	printf("tolower: 0 -> %c", ft_tolower(48));
	return (1);
}

// /*
// ** Test Code for isprint, isascii, isalnum, isdigit, isalpha
// */

// int	main(void)
// {
// 	printf("isprint: 1 -> %d", ft_isprint('!'));
// 	prtinf("isascii: ");
// 	printf("isalnum: ");
// 	printf("isdigit: ");
// 	pritnf("isalpha: ");
// 	return (1);
// }
