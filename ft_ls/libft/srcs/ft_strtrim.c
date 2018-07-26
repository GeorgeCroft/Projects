/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:05:01 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:05:03 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;

	if (s)
	{
		start = 0;
		while (s[start] && (s[start] == ' ' || s[start] == '\t' ||
					s[start] == '\n'))
			start++;
		if (s[start] == '\0')
			return (ft_strdup(s + start));
		len = ft_strlen(s) - 1;
		while (s[len] && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n'))
			len--;
		return (ft_strsub(s, start, len - start + 1));
	}
	return (NULL);
}
