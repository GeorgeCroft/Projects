/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:02:29 by gmura             #+#    #+#             */
/*   Updated: 2018/01/26 19:13:11 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "../libft/libft.h"
#include <stdio.h>

int	ft_errorcheck(int argc, char *argv)
{
	char *str;

	if (argc != 2)
	{
		ft_errormsg(3);
		return (0);
	}
	str = ft_filetostr(argv);
	if (ft_checkfile(str) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		nb_of_tetros;
	int		square;
	int		**tetro;
	int		i;

	if (!ft_errorcheck(argc, argv[1]))
		return (0);
	i = -1;
	str = ft_filetostr(argv[1]);
	nb_of_tetros = (ft_strlen(str) + 1) / 21;
	square = ft_minsquare(nb_of_tetros);
	tetro = ft_tetrotoarray(str);
	if (nb_of_tetros == 1 && (tetro[0][0] != 0 || tetro[0][1] != 1
				|| tetro[0][2] != 5 || tetro[0][3] != 6))
		square++;
	while (++i < nb_of_tetros)
		if ((tetro[i][3] == 3 || tetro[i][3] == 15) && square == 3)
		{
			square++;
			break ;
		}
	ft_algotetro(ft_tetroinit(tetro, nb_of_tetros, square), 0,
			ft_makegrid(square), (nb_of_tetros));
	return (0);
}
