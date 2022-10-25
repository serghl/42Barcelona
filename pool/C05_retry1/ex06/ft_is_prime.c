/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:00:10 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/25 10:18:31 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_is_prime(int nb)
{
	int	ret;
	int	i;

	ret = 1;
	i = 2;
	if (nb == 0 || nb == 1)
	ret = 0;
	while (i <= nb / 2 && nb <= 46341)
	{	
		if (nb % i == 0)
			ret = 0;
		i++;
	}
	return (ret);
}
/*
int main(int argc, char *argv[])
{
	
	int nb = atoi(argv[1]);
	if (argc != 2) {
		printf("Los argumentos no son validos");
	}
	else 
		printf("%d",ft_is_prime(nb));
	return 0;
}
*/
