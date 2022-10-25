/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:59:26 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/15 00:35:47 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	str_ret;	
	int	i;

	i = 0;
	str_ret = 1;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| str[i] >= 'A' && str[i] <= 'Z'))
		{
			str_ret = 0;
			i++;
		}
	i++;
	}
	return (str_ret);
}
