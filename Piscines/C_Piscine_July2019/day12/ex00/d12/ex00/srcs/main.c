/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 07:45:09 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/25 21:52:52 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.");
	else if (argc == 2)
		ft_display_file(argv[1]);
	else
		ft_putstr("Too many arguments.");
	return (0);
}
