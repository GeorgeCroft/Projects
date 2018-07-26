/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:04:45 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:04:47 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (s)
	{
		i = 0;
		j = start;
		sub = ft_strnew(len);
		if (sub)
		{
			while (j < (start + len))
			{
				sub[i] = s[j];
				i++;
				j++;
			}
			sub[i] = '\0';
			return (sub);
		}
	}
	return (NULL);
}
