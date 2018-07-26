/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:02:17 by gmura             #+#    #+#             */
/*   Updated: 2018/01/18 18:02:19 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_minsquare(int nb_of_tetros)
{
	int		i;
	int		nbr;

	nbr = nb_of_tetros;
	if (nb_of_tetros == 1)
		return (2);
	i = 2;
	nbr = nbr * 4;
	while (i * i < nbr)
		i++;
	return (i);
}
