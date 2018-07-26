/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:50:15 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:50:18 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*str) * size);
	if (str)
	{
		i = 0;
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
