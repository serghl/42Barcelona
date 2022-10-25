/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:19:05 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/20 10:56:41 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_validbase(char *base, char x)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (base[i])
		if (base[i++] == x)
			cont++;
	if (cont >= 2)
		return (0);
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	char x;

	size = ft_strlen(base);
	if (nbr < 0) 
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr <= size)
	{
		x = base[nbr];
		write(1, &x, 1);
	}
	else 
	{
	ft_putnbr_base(nbr / size , base);
	ft_putnbr_base(nbr % size , base);
	}
}

int main() {
	int nbr = 376;
	// char *base = "0123456789";
	 char *base = "01";
    // char *base = "0123456789ABCDEF";
	// char *base = "poniguay";
	ft_putnbr_base(nbr,base);
}

