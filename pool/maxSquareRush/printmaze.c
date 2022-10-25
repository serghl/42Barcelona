/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmaze.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:23:20 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/26 12:49:23 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void readmaze(char maze[], int row, int col)
{	
	int x;
	int y;
	
	x = 0;
	y = 0;
	while ( x < row)
	{
		while (y < col)
		{
			ft_putchar(maze[x][y]);
			y++;
		}
		ft_putchar('\n');
		y = 0;
	x++;
	}
}

int main()
{
	char **maze; 
	int row = 4;
	int col = 4;
	maze = maze[row][col];

	maze[0][0] = '.';
	maze[0][1] = '.';
	maze[0][2] = '.';
	maze[0][3] = 'x';
	maze[1][0] = '.';
	maze[1][1] = 'x';
	maze[1][2] = '.';
	maze[1][3] = '.';
	maze[2][0] = '.';
	maze[2][1] = '.';
	maze[2][2] = '.';
	maze[2][3] = '.';
	maze[3][0] = '.';
	maze[3][1] = '.';
	maze[3][2] = '.';
	maze[3][3] = '.';
	//char emp = '.';
	//char obs = 'o';
	//char sol = 'x';

	readmaze(maze, row, col);
	return 0;
}

