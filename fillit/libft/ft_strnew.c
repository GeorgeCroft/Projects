/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:52:19 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:52:23 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*r;

	r = NULL;
	size = size + 1;
	if ((r = (char*)malloc(sizeof(char) * size)) != NULL)
	{
		r[size] = '\0';
		while (size > 0)
		{
			size--;
			r[size] = '\0';
		}
	}
	return (r);
}
