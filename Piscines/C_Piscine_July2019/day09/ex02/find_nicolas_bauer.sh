# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/19 04:44:08 by vinguyen          #+#    #+#              #
#    Updated: 2019/07/19 04:58:46 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cat $1 | grep --ignore-case "nicolas	bauer" | awk '{print $(NF-1)}'