/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:47:35 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:47:38 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	int		good;

	good = 0;
	i = 0;
	while (size > 0 && good == 0 && i < size)
	{
		if (dst[i] == '\0')
			good = 1;
		i++;
	}
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (good == 0)
		return (size + len_src);
	else
	{
		i = -1;
		while (src[++i] != '\0' && i < size - len_dst - 1)
			dst[len_dst + i] = src[i];
		dst[len_dst + i] = '\0';
	}
	return (len_dst + len_src);
}
