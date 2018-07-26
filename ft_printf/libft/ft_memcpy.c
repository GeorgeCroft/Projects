/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:41:15 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:41:25 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	while (len > 0)
	{
		((unsigned char*)dst)[len - 1] = ((unsigned char*)src)[len - 1];
		len--;
	}
	return (dst);
}
