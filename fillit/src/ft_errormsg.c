/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errormsg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:59:13 by gmura             #+#    #+#             */
/*   Updated: 2018/01/26 18:44:42 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_errormsg(int msg)
{
	if (msg == 1)
		ft_putstr_fd("ERROR: Could not open file\n", 2);
	if (msg == 2)
		ft_putstr_fd("ERROR: The file is too large\n", 2);
	if (msg == 3)
		ft_putstr_fd("Usage : ./fillit [ somefile... ]\n", 2);
}
