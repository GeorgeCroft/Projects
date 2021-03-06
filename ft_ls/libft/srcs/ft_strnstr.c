/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 18:03:39 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 18:03:41 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr_big;
	char	*ptr_little;

	i = 0;
	j = 0;
	ptr_big = (char *)big;
	ptr_little = (char *)little;
	if (ft_strlen(ptr_little) == 0)
		return (ptr_big);
	while (ptr_big[i] && len-- >= ft_strlen(ptr_little))
	{
		while (ptr_little[j] == ptr_big[i + j])
		{
			if (j == ft_strlen(ptr_little) - 1)
				return (ptr_big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
