/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:16:14 by shortas-          #+#    #+#             */
/*   Updated: 2022/09/21 10:17:12 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, int len)
{
	int		i;
	char	*d;

	i = 0;
	while (i < len)
	{
		d[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
