/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:27:30 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/09 16:40:03 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_test(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || ((j == x && i == y) && (i != 1 && j != 1)))
	{
		ft_putchar('/');
	}
	else if ((j == x && i == 1) || (i == y && j == 1))
	{
		ft_putchar('\\');
	}
	else if (j == 1 || j == x || i == 1 || i == y)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)

{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		write(1, "Arguments are not valid", 23);
	}
	else
	{
		i = 1;
		j = 1;
		while (i <= y)
		{
			while (j <= x)
			{
				ft_test(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 1;
		}
	}
}
