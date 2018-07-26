/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:03:52 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:03:55 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	ptr = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return (ptr + len);
	while (len >= 1)
	{
		if (ptr[len - 1] == (char)c)
			return (ptr + len - 1);
		len--;
	}
	return (NULL);
}
