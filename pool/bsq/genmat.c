/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   genmat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:23:20 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/26 15:27:16 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    number = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number *= 10;
        number += str[i] - 48;
        i++;
    }
    return (number * sign);
}

void fillmat(char **mat,int rows, int cols, char c)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < rows)
	{
		while (y < cols)
		{
		mat[x][y] = c;
		y++;
		}
	y = 0;
	x++;
	}
	// Test
	// Printa la matriz 
	 x = 0;
	 y = 0;

	while (x < rows)
	{
		 while (y < cols)
		 {
			 write(1,&mat[x][y], 1);
			 y++;
		 }
		 write(1, "\n", 1);
		 y = 0;
		 x++;
	}
	// -------------------
}


void genmat(int rows, int cols, char *c)
{	
	int x;
	int y;
	char **mat =(char **)malloc(rows * sizeof(char*));

	while (x < rows)
	{
		mat[x] = (char *)malloc(cols * sizeof(char));
		x++;
	}
	fillmat(mat,rows,cols, c);
	free(mat);

}

int main(int argc, char *argv[])
{	
	int row = ft_atoi(argv[1]);
	int col = ft_atoi(argv[2]);
	char *c = argv[3];
	genmat(row, col, c);
	return 0;
}

