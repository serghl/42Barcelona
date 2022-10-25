/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:39:43 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/11 11:41:00 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 8)
	{
		n2 = n1 + 1;
		while (n1 != n2 && n2 <= 9)
		{			
			ft_putchar(n1 + '0');
			ft_putchar(n2 + '0');
			if (!(n1 == 8 && n2 == 9))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
		n2++;
		}
	n1++;
	}
}
