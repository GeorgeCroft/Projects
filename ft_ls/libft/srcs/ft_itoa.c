/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:48:18 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:48:21 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa_isnegative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char		*ft_itoa(int n)
{
	int		temp;
	int		len;
	int		negative;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp = n;
	len = 2;
	negative = 0;
	itoa_isnegative(&n, &negative);
	while (temp /= 10)
		len++;
	len += negative;
	if ((str = (char *)malloc(sizeof(*str) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
