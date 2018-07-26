/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:04:44 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 11:04:46 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
