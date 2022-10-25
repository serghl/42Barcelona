#include "ft.h"


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int findmin(int n1, int n2, int n3)
{
	int min;

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;
	return (min);
}

void printboard(int board[ROW][COL])
{
	int m;
	int n;

	m = 0;
	n = 0;
	for (int m = 0; m < ROW; m++)
	{
		for (int n = 0; n < COL; n++)
		{
			printf("%d ",board[m][n]);
		}
		printf("\n");
	}
}

void findsquare(int board[ROW][COL])
{
	int i;
	int j;
	int maxresb;
	int maxi;
	int maxj;
	int resb[ROW][COL];

	maxi = 0;
	maxj = 0;
	i = 0;
	j = 0;
	while (i < ROW)
	{
		resb[i][0] = board[i][0];
		i++;
	}
	while (j < COL)
	{
		resb[0][j] = board[0][j];
		j++;
	}
	i = 1;
	j = 1;
	while(i <= ROW)
	{
		while (j <= COL)
		{
			if (board[i][j] == 1)
				resb[i][j] = 1 + findmin(resb[i][j-1],resb[i-1][j],resb[i-1][j-1]);
				else
				resb[i][j] = 0;
			j++;
		}
	i++;
	j = 1;
	}
	printboard(resb);
}

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


int **chartoint(char board[ROW][COL], char obs)
{
	int	i;
	int	j;
	int	**destboard[ROW][COL];

	i = 0;
	j = 0;
	while (i < ROW)
	{
		while (j < COL)
		{
			if (board[i][j] == obs)
			destboard[i][j] = 0;
			else
			destboard[i][j] = 1;
		j++;
		}
	j = 0;
	i++;
	}
	return (destboard);
}

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
		return (0);
	fd = open(file, O_RDONLY);
	read(fd, buffer, 4096);
	rows = ft_atoi(buffer);
	cols = ft_cols(buffer);
	printf("rows = %d   cols = %d\n\n", rows, cols);
	matrix = (char**)malloc(rows * sizeof(char*));
	if (!matrix)
		return (0);
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
