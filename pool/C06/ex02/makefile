# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 17:29:32 by shortas-          #+#    #+#              #
#    Updated: 2022/07/28 17:45:13 by shortas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = prueba

FOLDER = ft_rev_params.c main.c

INCLUDE = ${SRC:.c=.o}

GCCFLAGS = -Wall -Wextra -Werror

${FILE}: ${INCLUDE}
	gcc -o ${FILE} ${FOLDER} -Iincludes ${GCCFLAGS}

fclean:
	rm -f ${FILE}
