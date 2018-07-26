/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:00:04 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:00:06 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(*s2) * (len + 1));
	if (s2)
	{
		ft_memcpy(s2, s1, len);
		s2[len] = '\0';
		return (s2);
	}
	else
		return (NULL);
}
