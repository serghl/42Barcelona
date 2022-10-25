/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:51:01 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/14 13:26:58 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	printhex(char c)
{
	char	*hexvalue;

	hexvalue = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexvalue [c / 16], 1);
	write(1, &hexvalue [c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			printhex(str[i]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}	
	}
}
