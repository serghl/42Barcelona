/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 22:34:35 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/20 13:13:39 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signs;
	int	ret;

	i = 0;
	signs = 0;
	ret = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 ))
			i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{	
			signs++;
		}
		i++;
	}
	while (str[i] >= '0' == str[i] <= '9')
	{
		ret = ret * 10 + (str[i++] - '0');
	}
	if (signs % 2 != 0)
		ret *= -1;
	return (ret);
}

int main()
{
	char *str= "\t+-1325632167";
	int ret = 0;
	ret = ft_atoi(str);
	printf("%d\n", ret);
	return 0;
}
	
