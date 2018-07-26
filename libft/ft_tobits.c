/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:19:26 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 11:19:29 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_tobits(size_t size, void *ptr)
{
	unsigned char	*b;
	char			*byte;
	int				i;
	int				j;
	int				k;

	b = (unsigned char*)ptr;
	byte = (char*)malloc(sizeof(unsigned char) * (size * 8 + 1));
	byte[size * 8] = '\0';
	k = size * 8 - 1;
	i = size - 1;
	while (i >= 0)
	{
		j = 7;
		while (j >= 0)
		{
			byte[k] = ((b[i] >> j) & 1) + '0';
			j--;
			k--;
		}
		i--;
	}
	return (byte);
}
