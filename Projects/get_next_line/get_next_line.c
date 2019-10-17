/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 20:31:10 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/15 20:31:11 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Param: file descriptor to read, pointer to a char to save the line read
** Return:
**		1 <- Line read
**		0 <- Reading has been completed
**		-1 <- Error happened
** Get_next_line must return its result without '\n'
** Calling your function will in a look will get the text available on a fd
** oneline at a time until the end of the text, no matter size of either text
** or the lines.
** Is the buff size should be valid for 9999, 1, and 10000000?
** Undefined behaviors: between two calls, the same fd designs 2  files
** although the reading from the first file was not completed
** & when reading a binary file
** A call to lseek(2) will never take place between two calls of the function
** on the same fd. Lseek is used to change the location of the read/write ptr
*/

/*
**	Fuctions allowed: read, malloc, free
*/

/* Bonus
 ** Use a single static variable
 ** Manage multiple file descriptors with your get next line
 **		eg. 3, 4, 5 (will call get next line 3 times wthout losing the
 **		reading thread on each fd
*/

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>

int		get_next_line(const int fd, char **line)
{
	char buf[BUFF_SIZE + 1];
	char fds[MAX_FD];
	int buff_ret;
	char *tmp;

	if (line == NULL || fd < 0 || fd > MAX_FD)
		return (-1);
	while ((buff_ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[buff_ret] = '\0';
		if ((tmp = ft_strchr(buf, '\n')))
			*(++tmp) = '\0';
		if (*line == NULL)
			*line = ft_strdup(buf);
		else
			*line = ft_strjoin(*line, buf);
		return (1);
	}
	return (0);
}


#ifdef getnextline
int		main(void)
{
	int fd;
	char *fn;
	char *line;
	int x;

	fn = "test";
	fd = open(fn, O_RDONLY);
	while ((x = get_next_line(fd, &line)) == 1)
	{
		printf("\n%s", line);
	}
	close(fd);
	return (0);
}
#endif
