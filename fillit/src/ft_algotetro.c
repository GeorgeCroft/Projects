/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:58:53 by gmura             #+#    #+#             */
/*   Updated: 2018/01/26 19:11:34 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "header.h"
#include "../libft/libft.h"

char	*ft_printtetro(int **tetro, char *grid, int position, int i)
{
	int k;

	k = 0;
	while (k < 4)
	{
		grid[tetro[i][k] + position] = 'A' + i;
		k++;
	}
	return (grid);
}

char	*ft_erasetetro(int **tetro, char *grid, int position, int i)
{
	int k;

	k = 0;
	while (k < 4)
	{
		grid[tetro[i][k] + position] = '.';
		k++;
	}
	return (grid);
}

int		ft_tetrofits(int **tetro, char *grid, int position, int i)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (grid[tetro[i][k] + position] != '.'
				|| tetro[i][k] + position > ft_strlen(grid))
			return (0);
		k++;
	}
	return (1);
}

int		ft_gridsize(char *grid)
{
	int i;

	i = 0;
	while (grid[i] == '.')
		i++;
	return (i);
}

int		ft_algotetro(int **tetro, int i, char *grid, int tetnb)
{
	unsigned long	position;
	int				print;

	if (i > tetnb - 1)
	{
		ft_putstr(grid);
		return (1);
	}
	position = -1;
	while (++position < (unsigned long)ft_strlen(grid))
	{
		print = 0;
		if (ft_tetrofits(tetro, grid, position, i))
		{
			print = 1;
			grid = ft_printtetro(tetro, grid, position, i);
			if (ft_algotetro(tetro, i + 1, grid, tetnb))
				return (1);
		}
		grid = (print) ? ft_erasetetro(tetro, grid, position, i) : grid;
	}
	if (i == 0)
		return (ft_algotetro(ft_tetrotogrid(tetro, tetnb, ft_gridsize(grid)
						+ 1), 0, ft_makegrid(ft_gridsize(grid) + 1), tetnb));
		return (0);
}
