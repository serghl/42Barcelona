/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsquare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:54:07 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/27 18:35:34 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define ROW 6
#define COL 6

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	findmin(int n1, int n2, int n3)
{
	int	min;

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;
	return (min);
}

void	printboard(int board[ROW][COL])
{
	int	m;
	int	n;

	m = 0;
	n = 0;
	while  (m < ROW)
	{
		while (n < COL)
		{
			ft_putchar(board[m][n] + '0');
			ft_putchar(' ');
			n++;
		}
	ft_putchar('\n');
	n = 0;
	m++;
	}
}

void findsquare(int board[ROW][COL])
{
	int i;
	int j;
	int resb[ROW][COL];
	
	i = 0;
	j = 0;
	while (i < ROW)
	{
		resb[i][0] = board[i][0];
		i++;
	}
	while (j < COL)
	{
		resb[0][j] = board[0][j];
		j++;
	}	
	i = 1;
	j = 1;
	while(i <= ROW)
	{
		while (j <= COL)
		{
			if (board[i][j] == 1)
				resb[i][j] = 1 + findmin(resb[i][j-1],resb[i-1][j],resb[i-1][j-1]);	
			else
				resb[i][j] = 0;	
			j++;
		}
	i++;
	j = 1;
	}
	printboard(resb);
}
