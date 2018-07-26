/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:01:40 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 11:02:55 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	long	t;
	long	long_nb;
	long	divide;

	long_nb = (long)n;
	if (long_nb < 0)
	{
		long_nb = long_nb * -1;
		ft_putchar('-');
	}
	t = long_nb;
	divide = 1;
	while (t != 0)
	{
		divide = divide * 10;
		t = t / 10;
	}
	while (divide > 1)
	{
		ft_putchar(48 + (long_nb % divide) / (divide / 10));
		divide = divide / 10;
	}
	if (long_nb == 0)
		ft_putchar('0');
}
