/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:19:05 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/20 16:14:11 by shortas-         ###   ########.fr       */
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
	int		size;
	char	c;

	size = ft_strlen(base);
	if (ft_validbase(base, base[0]))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		else if (nbr < size)
		{
			c = base[nbr];
			ft_putchar(c);
		}
		else
		{
			ft_putnbr_base(nbr / size, base);
			ft_putnbr_base(nbr % size, base);
		}
	}
}

int main() {
	int nbr = 1234567890;
	// char *base = "0123456789";
	 char *base = "01";
    // char *base = "0123456789ABCDEF";
	// char *base = "poniguay";
	ft_putnbr_base(nbr,base);
}

