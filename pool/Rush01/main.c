/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:57:07 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/16 16:55:02 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) 
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int size;
	
	size = (argc -1 / 4);
	
	char tablero[size][size];
	
	//	printf("Numero de argumentos : %d\n", argc);
	//	printf("Valor de argumento : %s\n", argv[3]);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%c", tablero[i][j]);
			if (j == size)	
				ft_putchar('\n');
		}
	}

	return (0);
}

	
