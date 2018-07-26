/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:04:25 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:04:27 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	while (little[size] != '\0')
		size++;
	if (size == 0)
		return ((char *)big);
	while (big[i])
	{
		while (little[j] == big[i + j])
		{
			if (j == size - 1)
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
