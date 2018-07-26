/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:51:56 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:51:58 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*r;
	size_t	i;

	r = (void*)malloc(size);
	if (r != NULL)
	{
		i = 0;
		while (i < size)
		{
			((char*)r)[i] = 0;
			i++;
		}
	}
	return (r);
}
