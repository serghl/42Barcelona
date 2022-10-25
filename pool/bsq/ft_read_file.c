/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:24:57 by tjeunet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/26 16:53:00 by shortas-         ###   ########.fr       */
=======
/*   Updated: 2022/07/26 19:05:52 by tjeunet          ###   ########.fr       */
>>>>>>> 9cb231cd053e62b290b3c4516c125ec89d8d2322
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	return (number * sign);
}

char	*ft_extract_characters(char *str, int i)
{
	char	*char_set;
	int		j;

	char_set = (char*)malloc(3 * sizeof(char));
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	j = 0;
	while (j < 3)
	{
		char_set[j] = str[i + j];
		j++;
	}
	return (char_set);
}

void	ft_read_file(char *file)
{
	char	*buffer;
	int		fd;
	int		c;
	int		i;
	int		rows_num;
	char	*char_set;
	int		j;

	buffer = (char *)malloc(1024 * sizeof(char));
	fd = open(file, O_RDONLY);
	c = read(fd, buffer ,1024);
	buffer[c] = '\0';
	i = 0;
	printf("%s\n", buffer);
	rows_num = ft_atoi(buffer);
	char_set = ft_extract_characters(buffer, i);
	printf("%c, %c, %c", char_set[0], char_set[1], char_set[2]);
	while (buffer[i] != '\n')
		i++;
	i++;
	j = 0;
	while (buffer[i + j] != '\n')
		j++;
	printf("\n%d = col_num", j);
}

// Calculate row_size and col_size
// Malloc **matrix
// read map line by line to create matrix
// Malloc *line and copy
//

int	ft_cols(char *str)
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i + j] != '\n')
		j++;
	return (j);
}

char	*ft_copy_row(char *str, int cols)
{
	int	i;
	char *row;

	row = (char*)malloc((cols + 1) * sizeof(char*));
	if (!row)
		printf("error *malloc");
	i = 0;
	while (i < cols)
	{
		row[i] = str[i];
		i++;
	}
	row[i] = '\0';
	return (row);
}

char **ft_create_matrix(char *file)
{
	int			fd;
	char	*buffer;
	int			rows;
	int			cols;
	char 	**matrix;
	int				i;

	buffer = (char *)malloc(4096 *  sizeof(char));
	if (!buffer)
		printf("error buffer");
	fd = open(file, O_RDONLY);
	read(fd, buffer, 4096);
	rows = ft_atoi(buffer);
	cols = ft_cols(buffer);
	printf("rows = %d   cols = %d\n\n", rows, cols);
	matrix = (char**)malloc(rows * sizeof(char*));
	if (!matrix)
		printf("malloc** error");
	buffer += 5;
	i = 0;
	while (i < rows)
	{
		matrix[i] = ft_copy_row(buffer, cols);
		i++;
		buffer += cols + 1;
	}
	close(fd);
	//free (buffer);
	return (matrix);
}

int	main(void)
{
	char **matrix;

	matrix = ft_create_matrix("map");
	
	int row, column=0;

    for (row=0; row<50; row++)
     {
        for(column=0; column<50; column++)
            {printf("%c", matrix[row][column]);}
           // printf("\n");
     }
}
