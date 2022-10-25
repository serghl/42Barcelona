/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebaExamen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:45:22 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/21 22:20:23 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_name(char *str)
{
	int i = 0;
	char **arrayList = malloc(20 * sizeof(char));

	while(str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			str[i] += 1;
			arrayList[i] = "juan";
			i++;
		}
	}
	for (int j = 0; j < str[j]; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
	for (int k = 0; k < i; k++) 
	{
	//arrayList[k] = "pepe";
	printf("ArrayList --> %s\n",arrayList[k]);
	}
	free(arrayList);
	arrayList = NULL;
}

int main(int argc, char *argv[])
{
	if (argc < 2) {
		printf("El programa necesita un argumento");
	} else {
	for (int i = 1; i < argc; i++)
	{
		print_name(argv[i]);
	}
	}
	return 0;
	}

/*
if (argc == 2)
{
	ft;
}
write(\n);
}i
*/
