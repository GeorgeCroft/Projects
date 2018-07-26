/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:46:04 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:43:38 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*r;
	size_t	i;
	int		found;

	r = NULL;
	found = 0;
	i = 0;
	while (found == 0 && i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
		{
			r = &((unsigned char*)s)[i];
			found = 1;
		}
		i++;
	}
	return (r);
}
