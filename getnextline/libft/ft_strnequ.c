/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:56:32 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:56:33 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		r;

	r = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (ft_strncmp(s1, s2, n) == 0)
			r = 1;
	}
	return (r);
}
