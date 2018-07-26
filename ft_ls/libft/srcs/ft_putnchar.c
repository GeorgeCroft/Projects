/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:54:39 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:54:41 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar(int len, char c)
{
	char	*s;

	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return ;
	s[len] = '\0';
	while (len--)
		s[len] = c;
	ft_putstr_free(s);
}
