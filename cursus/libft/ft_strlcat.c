/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:42:22 by shortas-          #+#    #+#             */
/*   Updated: 2022/09/21 10:59:24 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
