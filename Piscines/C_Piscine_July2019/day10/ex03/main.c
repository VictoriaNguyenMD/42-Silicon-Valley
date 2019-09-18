/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 06:31:22 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 21:02:47 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int		f(char *tab)
{
	if(*tab == '2')
		return (1);
	return (0);
}

int		main(void)
{
	char *tab = "had\0";
	char **ptr = &tab;

	printf("%d", ft_any(ptr, &f));
}
