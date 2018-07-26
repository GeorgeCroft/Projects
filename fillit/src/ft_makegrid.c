/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makegrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:01:35 by gmura             #+#    #+#             */
/*   Updated: 2018/01/26 18:43:52 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_makegrid(int i)
{
	int		j;
	char	*str;

	str = (char*)malloc(sizeof(char) * (i * (i + 1) + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (j < i * (i + 1))
	{
		if ((j + 1) % (i + 1) != 0)
			str[j] = '.';
		else
			str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
