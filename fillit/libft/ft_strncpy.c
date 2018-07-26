/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:46:50 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:46:56 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	while (i < len)
	{
		if (i < src_len)
		{
			dst[i] = src[i];
		}
		else
		{
			dst[i] = '\0';
		}
		i++;
	}
	return (dst);
}
