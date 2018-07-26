/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:00:59 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:01:00 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	if (s1 && s2)
	{
		s3 = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (s3)
		{
			ft_strcat(s3, s1);
			ft_strcat(s3, s2);
			return (s3);
		}
	}
	return (NULL);
}
