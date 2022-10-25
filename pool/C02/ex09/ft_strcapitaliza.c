/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitaliza.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:23:17 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/13 18:27:26 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		if (!(str[n - 1] >= 'a' && str[n - 1] <= 'z')
			&& !(str[n - 1] >= 'A' && str[n - 1] <= 'Z')
			&& !(str[n - 1] >= '0' && str[n - 1] <= '9'))
		{
			if (str[n] >= 'a' && str[n] <= 'z')
			{
				str[n] -= 32;
			}
		}
		else
		{
			if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] = (str[n] + 32);
		}
		n++;
	}
	return (str);
}
