/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:45:42 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/22 16:01:54 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	ret;
	int	i;

	ret = 1;
	i = 2;
	if (nb == 0 || nb == 1)
	ret = 0;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			ret = 0;
		i++;
	}
	return (ret);
}

int	ft_find_next_prime(int nb)
{
	int	nextpr;
	int	found;
	int	i;

	found = 0;
	nextpr = nb;
	while (found == 0)
	{
		if (ft_is_prime(nextpr))
			found = 1;
		else
			nextpr++;
	}
	return (nextpr);
}
/*
int main()
{
int result = ft_find_next_prime(44);
printf("%d", result);
return 0;
}
*/
