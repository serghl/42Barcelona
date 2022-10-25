/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:04:19 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/18 16:10:07 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}

int main()
{
	char *ret;
	char str1[100] = "Hola";
	char *str2 = " mundo";
	ret = ft_strncat(str1, str2, 2);
	printf("%s\n",ret);
	return 0;
}

