/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:29:54 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/27 18:41:04 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#include <unistd.h>
#define ROW 6
#define COL 6

int main(int argc, char **argv)
{
	char	**matrix;

	matrix = ft_create_matrix(argv[1]);



	int board[ROW][COL] = 	{{1, 1, 0, 1, 1, 1},
							 {1, 1, 1, 1, 1, 1},
							 {1, 0, 1, 1, 1, 1},
							 {1, 1, 1, 1, 1, 1},
							 {0, 1, 1, 0, 1, 1},
							 {1, 1, 1, 1, 1, 1}};

	findsquare(board);
	return (0);
}
