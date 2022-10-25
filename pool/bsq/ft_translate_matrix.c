/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate_matrix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:30:45 by tjeunet           #+#    #+#             */
/*   Updated: 2022/07/27 15:42:28 by tjeunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**char_to_int(char **destboard, int rows, int cols)
{
	char **matrix;
	int			i;
	int			j;

	matrix = (int **)malloc(rows * sizeof(int *));
	if (!matrix)
		return (0);
	i = 0;
	while (i < rows)
	{
		matrix[i] = (int*)malloc(cols * sizeof(int));
		if (!matrix[i])
			return (0);
		j = 0;
		while (j < cols)
		{
			if (destboard[i][j] == '0')
				matrix[i][j] = 0;
			else if (destboard[i][j] == '.')
				matrix[i][j] = 1;
			j++;
		}
		i++;
	}
	return (matrix);
}
