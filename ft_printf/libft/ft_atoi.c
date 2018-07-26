/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:49:27 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 11:27:12 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	long_check(long long nr)
{
	if (nr > 922337203685477580)
		return (-1);
	if (nr < -922337203685477580)
		return (0);
	return (2);
}

int			ft_atoi(const char *str)
{
	long long	nr;
	int			sign;
	size_t		i;

	nr = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (long_check(nr) != 2)
			return (long_check(nr));
		nr = nr * 10 + sign * ((int)str[i] - '0');
		if (nr > 0 && sign == -1)
			return (0);
		if (nr < 0 && sign == 1)
			return (-1);
		i++;
	}
	return ((int)nr);
}
