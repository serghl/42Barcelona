/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:59:16 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/25 20:26:42 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int abs(int n)
{
	if (n < 0)

	return (n * -1);
}

int	*ft_range(int min, int max)
{
	int size;
	int i;
	int *ret;

	i = 0;
	size = max - min;
	ret = malloc(size * sizeof(int));
	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			ret[i] = min;
			min ++;
			i++;
		}
	}
	free(ret);
	return (ret);
}

int main()
{
	int i = 0;
	int min = -12;
	int max = 4354425;

	int *ret = ft_range(min, max);
	while (ret[i])
	{
		printf("%d",ret[i]);
		printf(" ");
		i++;
	}
return 0;
}
