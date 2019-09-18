/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:28:02 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 21:31:49 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*));

int		f(char *tab)
{
	if(*tab == '2')
		return (1);
	return (0);
}

int		main(void)
{
	char *tab = "h2a2d\0";
	char **ptr = &tab;

	printf("%d", ft_count_if(ptr, &f));
}
