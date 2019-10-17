/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 20:31:16 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/15 20:31:17 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

/*
**  Library for the read(), malloc(), free(), write()
*/

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

/*
**	Macro for BUFF_SIZE
*/
# define BUFF_SIZE 10

/*
**	Prototype for get_next_line()
*/

int		get_next_line(const int fd, char **line);

#endif
