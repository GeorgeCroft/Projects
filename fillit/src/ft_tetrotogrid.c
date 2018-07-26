/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrotogrid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:01:47 by gmura             #+#    #+#             */
/*   Updated: 2018/01/18 18:01:48 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	**ft_tetrotogrid(int **t, int nb_of_tetros, int width)
{
	int		i;
	int		id;

	id = 0;
	i = 0;
	while (id < nb_of_tetros)
	{
		i = 0;
		while (i < 4)
		{
			t[id][i] = t[id][i] + (t[id][i] / width);
			i++;
		}
		id++;
	}
	return (t);
}
