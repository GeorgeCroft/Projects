/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:01:56 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:01:58 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	size_t			len;
	unsigned int	i;

	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		s2 = (char *)malloc(sizeof(*s2) * (len + 1));
		if (s2)
		{
			while (s[i])
			{
				s2[i] = f(i, s[i]);
				i++;
			}
			s2[i] = '\0';
			return (s2);
		}
	}
	return (NULL);
}
