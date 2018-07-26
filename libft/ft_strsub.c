/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:56:44 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:56:46 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	r = ft_strnew(len);
	if (s != NULL && r != NULL)
	{
		i = 0;
		while (i < len)
		{
			r[i] = s[start + i];
			i++;
		}
	}
	return (r);
}
