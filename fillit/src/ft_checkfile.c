/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:00:24 by gmura             #+#    #+#             */
/*   Updated: 2018/01/26 19:11:45 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "../libft/libft.h"

int	ft_checkfile(char *str)
{
	int i;

	if ((ft_strlen(str) + 1) % 21 != 0)
		return (0);
	if (ft_strlen(str) > 550)
		return (0);
	i = 0;
	while (ft_checkgrid(&str[i]) && ft_checktetro(&str[i]))
	{
		if (i + 20 == ft_strlen(str))
			return (1);
		i = i + 20;
		if (str[i] != '\n')
		{
			return (0);
		}
		i++;
	}
	if (i == ft_strlen(str))
		return (1);
	return (0);
}
