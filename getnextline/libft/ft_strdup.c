/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:44:29 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:44:31 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	len;

	len = ft_strlen(s1);
	r = (char*)malloc(sizeof(char) * (len + 1));
	if (r != NULL)
	{
		r[len] = '\0';
		ft_strcpy(r, s1);
	}
	return (r);
}
