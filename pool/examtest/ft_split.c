/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:12:38 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/28 15:32:34 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int wordcount(char *str, int *charset)
{


}

char **ft_split(char *str, char *charset)
{
	char **ret = (*ret) malloc((strlen(str) / 2) * sizeof (*char));

}
