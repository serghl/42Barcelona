/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:34:36 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/13 13:40:59 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	str_ret;
	int	i;

	i = 0;
	str_ret = 1;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			str_ret = 0;
			i++;
		}
	i++;
	}
	return (str_ret);
}
