/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permut.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:55:40 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/17 12:22:18 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int permut() 
{	
	int	res = 1;
	int x = 0;
	int y = 0;
	int i = 0;
	int found = 0;


	int permutaciones[24][4] = {{1,2,3,4},{1,2,4,3},{1,3,2,4},{1,3,4,2},{1,4,2,3},{1,4,3,2},{2,1,3,4},{2,3,1,4},{2,3,4,1},{2,4,1,3},{2,4,3,1},{3,1,2,4},{3,1,4,2},{3,2,1,4},{3,2,4,1},{3,4,1,2},{3,4,2,1},{4,1,2,3},{4,1,3,2},{4,2,1,3},{4,2,3,1},{4,3,1,2},{4,3,2,1}};

	int testvalido[4][4] ={{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
	int testinvalido[4][4] ={{1,2,3,4},{2,3,4,2},{3,4,1,2},{4,1,2,3}};
	
	
	// Recorremos las filas del test, izquierda a derecha, de arriba a abajo 
	 for (int i = 0; i < 4; i++)  
		{	
			// Aqui recorremos las permutaciones 
			for (int j = 0; j < 24; j++) 
			{
				if (testvalido[i][x] == permutaciones[j][x]) 
				{	
					x++;
				}
				else 
				{
					x = 0;
					j++;
				}
		}
	}
	return (res);
}

int main()
{
int res = permut();
printf("Res -> %d\n", res);
}




	
	


