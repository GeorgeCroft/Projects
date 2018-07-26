/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:01:09 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:01:12 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	char	*s;
	char	*reader;

	s = (char *)ft_memchr(dst, '\0', size);
	if (s == NULL)
		return (size + ft_strlen(src));
	reader = (char *)src;
	len = (size_t)(s - dst) + ft_strlen(reader);
	while ((size_t)(s - dst) < size - 1 && *reader != '\0')
	{
		*s = *reader;
		s++;
		reader++;
	}
	*s = '\0';
	return (len);
}
