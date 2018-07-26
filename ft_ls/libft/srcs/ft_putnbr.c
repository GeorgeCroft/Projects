/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:54:15 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:54:16 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		long_nb;

	if (n == -2147483648)
	{
		long_nb = n / 10;
		ft_putchar('-');
		ft_putnbr(-long_nb);
	}
	if (-2147483648 < n && n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n == -2147483648)
		ft_putchar(n + '8');
	else
		ft_putchar(n + '0');
}
