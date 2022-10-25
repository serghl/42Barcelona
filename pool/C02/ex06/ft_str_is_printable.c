/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:01:24 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/13 14:08:33 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	str_ret;
	int	i;

	i = 0;
	str_ret = 1;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			str_ret = 0;
			i++;
		}
	i++;
	}
	return (str_ret);
}
