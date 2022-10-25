/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:48:51 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/22 16:06:28 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = nb;
	f = 1;
	while (i != 0)
	{
		f = f * i;
		i--;
	}
	return (f);
}
/*
int main()
{
	int i = 5;
	int j = ft_iterative_factorial(i);

	printf("%d",j);
	return 0;
}
*/
