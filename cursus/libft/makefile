# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 10:13:15 by shortas-          #+#    #+#              #
#    Updated: 2022/09/21 11:26:04 by shortas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a

SRC = 	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
		ft_isascii.c	ft_isprint.c	ft_strlen.c\
		ft_memset.c 	ft_bzero.c		ft_memcpy.c\
						ft_strlcpy.c	ft_strlcat.c\
		ft_toupper.c	ft_tolower.c	 ft_strchr.c	
		# ft_memmove.c

GCCFLAGS = -Wall -Wextra -Wextra

LIB = ar -rcs

# Aqui asignamos a la variable obj, todos los .c dentro de SRC

OBJ = $(SRC:.c=.o)

# Compilamos todos los archivos .c (Aqui los dos comandos del final lo convierte en 'recursivo?')

%.o:%.c
		gcc -c $(GCCFLAGS) $< -o $@

# No entiendo esto, que hace exactamente esta orden de : ??

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

# Que hace esto??

all : $(NAME)

# Limpiar 

fclean: clean

	rm -f $(NAME)

clean:
	
	rm -f $(OBJ)

re: fclean all
