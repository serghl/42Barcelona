/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emillier <emillier@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:52:51 by emillier          #+#    #+#             */
/*   Updated: 2022/07/17 12:47:05 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(char **str, int largo, int alto) //Recibe el array del resultado de las permutaciones
{
	int x;
	int y;
	int c;

	x = 1;
	y = 1;
	c = 0;
	while (y >= 1 && y <= alto)
	{
		while (x >= 1 && x <= largo)
		{

			ft_putchar(str[0][c]);
			write(1, " ", 1);
			c = c + 2;
			x++;
		}
		write(1, "\n", 1);
		x = 1;
		y++;
	}
}

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int largo;
	int alto;

	largo = 4;
	alto = 4;

	print_board(&argv[1], largo, alto);
	return (0);
}

