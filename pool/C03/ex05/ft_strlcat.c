/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:50:47 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/21 11:17:04 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	res ;

	i = 0;
	res = 0;
	while (str[i])
	{
		res++;
		i++;
	}
	return (res);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	i = 0;
	if (size <= destlen)
		return (size + ft_strlen(src));
	while (src[i] && (destlen + 1 < size))
	{	
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}


int main() 
{
	unsigned int ret;
	char str1[100] = "Hola";
	char *str2 = " mundo";
	ret = ft_strlcat(str1, str2, 16);
	printf("%d\n",ret);
	return 0;
}

