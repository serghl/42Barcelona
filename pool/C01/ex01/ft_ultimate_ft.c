/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 23:16:41 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/18 17:31:17 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
		printf("%p", *nbr);
}

int main()
{
	int i = 5;
int *nb1 = &i;
int **nb2 = &nb1;
int ***nb3 = &nb2;
ft_ultimate_ft(nb3);
return 0;
}
