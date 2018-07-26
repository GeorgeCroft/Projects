/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:51:23 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:51:25 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_dst <= ptr_src)
		ft_memcpy(ptr_dst, ptr_src, len);
	else
	{
		while (len--)
			ptr_dst[len] = ptr_src[len];
	}
	return (ptr_dst);
}
