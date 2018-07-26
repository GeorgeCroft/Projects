/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:03:04 by gmura             #+#    #+#             */
/*   Updated: 2018/01/18 18:03:08 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_errormsg(int msg);
char	*ft_filetostr(char *file);
int		ft_checktetro(char *str);
int		ft_checkgrid(char *str);
int		ft_countblocks(char *str);
int		ft_checkfile(char *str);
char	*ft_makegrid(int i);
int		ft_algotetro(int **tetro, int i, char *grid, int nb_of_tetros);
int		**ft_tetrotoarray(char *str);
int		**ft_tetrotogrid(int **t, int nb_of_tetros, int grid);
int		**ft_tetroinit(int **t, int nb_of_tetros, int width);
int		ft_minsquare(int nb_of_tetros);
#endif
