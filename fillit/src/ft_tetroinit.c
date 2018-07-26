/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetroinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:00:06 by gmura             #+#    #+#             */
/*   Updated: 2018/01/18 18:08:38 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		**ft_tetroinit(int **t, int nb_of_tetros, int width)
{
	int		i;
	int		id;

	id = 0;
	while (id < nb_of_tetros)
	{
		i = -1;
		if (width == 2)
			while (++i < 4)
				t[id][i] = t[id][i] - ((t[id][i] / 5) * 2);
		if (width == 3)
			while (++i < 4)
				t[id][i] = t[id][i] - (t[id][i] / 5);
		if (width > 4)
			while (++i < 4)
				t[id][i] = t[id][i] + ((t[id][i] / 5) * (width - 4));
		id++;
	}
	return (t);
}
