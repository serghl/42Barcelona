/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:41:38 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/18 16:07:38 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	int				r;
	unsigned int	i;

	r = 0;
	i = 0;
	if (n != 0)
	{
		while (s1[i] && s1[i] == s2[i] && n > i + 1)
		{
		i++;
		}
	r = s1[i] - s2[i];
	}
	return (r);
}

int main()
{
char s1[] = "4567";
char *s2 = "4568";
int res = ft_strncmp(s1,s2,4);
printf("%d",res);
return (0);
}

