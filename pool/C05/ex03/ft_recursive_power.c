/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:01:27 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/21 12:43:09 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
	nb *= ft_recursive_power(nb, power -1);
	}
	return (nb);
}
/*
int main()
{
	int res = 0;
	int nb = 5;
	int pow = 3;
	res = ft_recursive_power(nb,pow);
	printf("%d",res);
	return (0);
}
*/
