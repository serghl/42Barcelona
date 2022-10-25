/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shortas- <shortas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:15:13 by shortas-          #+#    #+#             */
/*   Updated: 2022/07/25 18:03:27 by shortas-         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_sorted(char *argv[])
{
	char		*temp;
	int			i;
	int			j;

	i = 1;
	while (argv[i])
	{	
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		j++;
		}
	i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	(void) argc;
	ft_sorted(argv);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}	
