/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:01:27 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/25 10:05:38 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int main()
{
	int res = 0;
	int nb = 5;
	int pow = 0;
	res = ft_recursive_power(nb,pow);
	printf("%d",res);
	return (0);
}
*/
