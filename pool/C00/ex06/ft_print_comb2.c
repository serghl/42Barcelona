/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:28:42 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/11 11:11:45 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printa_aux(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{		
			ft_printa_aux(n1 / 10 + '0');
			ft_printa_aux(n1 % 10 + '0');
			write(1, " ", 1);
			ft_printa_aux(n2 / 10 + '0');
			ft_printa_aux(n2 % 10 + '0');
			if (n1 != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			n2++;
		}
	n1++;
	}
}
