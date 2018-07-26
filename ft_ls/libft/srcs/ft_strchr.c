/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:57:31 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:58:47 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (ptr[i] == (char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
