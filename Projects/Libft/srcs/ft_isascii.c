# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 21:42:35 by vinguyen          #+#    #+#              #
/*   Updated: 2019/09/16 22:13:21 by vinguyen         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

int		ft_isascii(int c)
{
	if (c >= 'nul' && c <= 'del')
		return 1;
	else
		return 0;
}
