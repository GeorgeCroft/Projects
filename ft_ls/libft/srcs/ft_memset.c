/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:51:36 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:51:38 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*p;
	size_t		i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
