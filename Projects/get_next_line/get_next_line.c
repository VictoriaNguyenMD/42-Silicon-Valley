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

void	*ft_memalloc(size_t size)
{
	unsigned char	*output;
	size_t			i;

	if (!size || size >= ULONG_MAX)
		return (NULL);
	output = (unsigned char*)malloc((size));
	i = 0;
	if (!output)
		return (NULL);
	else
	{
		while (i < (size))
		{
			output[i] = 0;
			i++;
		}
	}
	return (output);
}

int		get_next_line(const int fd, char **line)
{
	char *buf;
	static int line_i;
	int buf_i;
	int buff_ret;

	line_i = 0;
	if (line == NULL || *line == NULL || fd < 0 || fd > MAX_FD)
		return (-1);
	while ((buf = ft_memalloc(BUFF_SIZE + 1)) && (buff_ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[buff_ret] = '\0';
		buf_i = 0;
		while (buf[buf_i] && buf[buf_i] != '\n')
		{
			(*line)[line_i] = buf[buf_i];
			line_i++;
			buf_i++;
		}
		if (buf[buf_i] == '\n')
		{
			(*line)[line_i] = '\0';
			return (1);
		}
		if (buf[buf_i] == '\0')
			return (0);
		free (buf);
	}
	return (-1);
}


// #ifdef getnextline
int		main(void)
{
	int fd;
	char *fn;
	char *line;
	int x;

	fn = "test";
	fd = open(fn, O_RDONLY);
	line = ft_memalloc(sizeof(char) * 100);
	while ((x = get_next_line(fd, &line)) >= 0)
	{
		printf("Test");
		line[x] = 0;
		printf("%s\n", line);
	}
	close(fd);
	return (0);
}
// #endif
