/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:48:11 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/11 11:39:27 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	abs(int nb)
{
	return (nb * ((nb > 0) - (nb < 0)));
}

int	reverse(int nb)
{
	int	rev_nb;

	rev_nb = 0;
	while (nb > 0)
	{
		rev_nb = rev_nb * 10 + nb % 10;
		nb = nb / 10;
	}
	return (rev_nb);
}

void	ft_putnbr2(int nb)
{
	int	num_digits;
	int	nb_aux;

	if (nb < 0)
	{
	nb = abs(nb);
		ft_putchar('-');
	}
nb = reverse(nb);
	nb_aux = nb;
	num_digits = 0;
	while (nb_aux != 0)
	{
		nb_aux = nb_aux / 10;
		num_digits++;
	}
	while (num_digits > 0)
	{
		ft_putchar(nb % 10 + '0');
		num_digits--;
		nb = nb / 10;
	}	
}
