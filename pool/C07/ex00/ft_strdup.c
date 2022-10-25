/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:13:48 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/25 19:58:44 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;
	int		i;

	i = 0;
	len = ft_strlen(src);
	ret = malloc(len + 1 * sizeof(char));
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i + 1] = '\0';
	return (ret);
}
/*
int main()
{
	char *src = "juanita banana";
	char *ret = ft_strdup(src);
	int i = 0;
	while(ret[i])
	{
		printf("%c",ret[i]);
			i++;;
	}
	return 0;
}
*/
