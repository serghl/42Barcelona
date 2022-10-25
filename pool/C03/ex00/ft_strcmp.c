/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 01:33:33 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/18 16:05:53 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}

int main()
{
	int x = 0;

	x = ft_strcmp("abcd", "abcd");
	printf("%d", x);
	return 0;
}

