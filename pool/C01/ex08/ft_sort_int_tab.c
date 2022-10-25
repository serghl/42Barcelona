/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:29:29 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/12 16:24:22 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	aux = 0;
	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < (size))
		{
			if (tab[j - 1] > tab[j])
			{
				aux = tab[j -1];
				tab[j - 1] = tab[j];
				tab[j] = aux;
			}
		j++;
		}
	j = 1;
	i++;
	}
}
