/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:57:42 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:57:45 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static long		ft_get_len(long n)
{
	long	len;
	long	nr;

	nr = n;
	if (nr < 0)
		nr = -nr;
	if (n == 0)
		return (1);
	len = 0;
	while (nr > 0)
	{
		nr = nr / 10;
		len++;
	}
	return (len);
}

static long		ft_pow10(long n)
{
	long	r;

	r = 10;
	while (n > 1)
	{
		r = r * 10;
		n--;
	}
	return (r);
}

static void		ft_build_str(long nr, long divide, char **str)
{
	size_t	i;

	i = 0;
	if (nr < 0)
	{
		(*str)[i++] = '-';
		nr = -nr;
	}
	while (divide > 1)
	{
		(*str)[i++] = (nr % divide) / (divide / 10) + '0';
		divide = divide / 10;
	}
}

char			*ft_itoa(int n)
{
	long	nr;
	long	len;
	long	divide;
	char	*str;

	nr = n;
	len = ft_get_len(nr);
	divide = ft_pow10(len);
	if (nr < 0)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	ft_build_str(nr, divide, &str);
	return (str);
}
