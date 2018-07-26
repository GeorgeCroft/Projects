/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:56:58 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:57:00 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	r = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		r = ft_strnew(len_s1 + len_s2);
		if (r != NULL)
		{
			i = -1;
			while (++i < len_s1)
				r[i] = s1[i];
			i = -1;
			while (++i < len_s2)
				r[i + len_s1] = s2[i];
		}
	}
	return (r);
}
