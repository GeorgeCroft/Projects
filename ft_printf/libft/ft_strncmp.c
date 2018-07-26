/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:49:14 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:49:17 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		a = ((unsigned char *)s1)[i];
		b = ((unsigned char *)s2)[i];
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
