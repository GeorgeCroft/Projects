/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:41:41 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:41:46 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	int				found;
	unsigned char	current;
	void			*r;

	r = NULL;
	found = 0;
	i = 0;
	while (found == 0 && i < n)
	{
		current = ((unsigned char*)src)[i];
		((unsigned char*)dst)[i] = current;
		if (current == (unsigned char)c)
		{
			found = 1;
			r = &dst[i + 1];
		}
		i++;
	}
	return (r);
}
