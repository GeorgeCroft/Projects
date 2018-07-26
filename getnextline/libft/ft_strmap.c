/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:56:00 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:56:02 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	size_t	i;
	size_t	len_s;

	r = NULL;
	if (s != NULL)
	{
		len_s = ft_strlen(s);
		r = ft_strnew(len_s);
		if (r != NULL)
		{
			i = 0;
			while (i < len_s)
			{
				r[i] = f(s[i]);
				i++;
			}
		}
	}
	return (r);
}
