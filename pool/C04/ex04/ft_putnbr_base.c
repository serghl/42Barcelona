/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 23:19:05 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/20 11:20:33 by shortas-         ###   ########.fr       */
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

void	printsolution(int nbr, int base)
{
	int		res[64];
	int		i;
	int		j;
	char	*base_digits;

	base_digits = "0123456789ABCDEF";
	j = 4;
	i = 0;
	while (nbr != 0)
	{
		res[i] = nbr % base;
		nbr = nbr / base;
		++i;
	}
	--i;
	while (i >= 0)
	{
		ft_putchar(base_digits[res[i]]);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	basetype;

	basetype = ft_strlen(base);
	i = 0;
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+' || !ft_validbase(base, base[i])))
			return ;
		i++;
	}
	if (i < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		printsolution(-nbr, basetype);
	}
	else
		printsolution(nbr, basetype);
}
/*
int main() {
	int nbr = 346436235;
	// char *base = "0123456789";
	// char *base = "01";
    char *base = "0123456789ABCDEF";
	// char *base = "poniguay";
	ft_putnbr_base(nbr,base);
}
*/
