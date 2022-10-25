/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:41:15 by mmoramov          #+#    #+#             */
/*   Updated: 2022/07/09 16:45:47 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_aux(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1 || j == x))
	{
		ft_putchar('A');
	}
	else if ((i == y) && (j == 1 || j == x))
	{
		ft_putchar('C');
	}
	else if (j == 1 || j == x || i == 1 || i == y)
	{
		ft_putchar('B');
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
				ft_aux(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
			j = 1;
		}
	}
}
