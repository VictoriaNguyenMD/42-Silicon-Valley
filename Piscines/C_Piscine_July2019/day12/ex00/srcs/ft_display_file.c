/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:40:39 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/25 23:40:24 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		ft_display_file(char *file_name)
{
	int		fd;
	char	character;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (-1);
	}
	while (read(fd, &character, 1))
	{
		ft_putchar(character);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (-1);
	}
	return (0);
}
