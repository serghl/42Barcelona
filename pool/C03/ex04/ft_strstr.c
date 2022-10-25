/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:18:13 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/18 16:11:46 by shortas-         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;
	int	j;

	n = 0;
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[i])
		i++;
	while (str[n])
	{
	j = 0;
		while (str[n] && str[n++] == to_find[j++])
		{
			if (to_find[j] != '\0')
				return (&str[n - j]);
		}
	}
	return (NULL);
}

int main()
{
	char *ret;
	char str1[100] = "Hola mundo!";
	char *str2 = "mo";
	ret = ft_strstr(str1, str2);
	printf("%s\n",ret);
	return 0;
}

