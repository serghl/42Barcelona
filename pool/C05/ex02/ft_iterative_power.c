/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:37:38 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/21 12:44:25 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = nb;
	i = 1;
	if (nb == 0 && power == 0)
		return (0);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
/*
int main()
{
	int res = 0;
	int nb = 5;
	int pot = 3;
	res = ft_iterative_power(nb,pot);
	printf("%d",res);
	return (0);
}
*/
