/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:02:41 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:02:44 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen((char*)src);
	while (i < n)
	{
		if (i > len_src)
		{
			dst[i] = '\0';
		}
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
