/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeunet <tjeunet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:14:55 by tjeunet           #+#    #+#             */
/*   Updated: 2022/07/27 18:32:38 by shortas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define ROW 6
#define COL 6
char **ft_create_matrix(char *file);
char	*ft_copy_row(char *str, int cols);
int	ft_cols(char *str);
int	ft_atoi(char *str);
int	**char_to_int(char **destboard, int rows, int cols);
void findsquare(int board[ROW][COL]);
void printboard(int board[ROW][COL]);
int findmin(int n1, int n2, int n3);
void    ft_putchar(char c);
void    ft_putstr(char *str);
int **chartoint(char board[ROW][COL], char obs);
#endif
