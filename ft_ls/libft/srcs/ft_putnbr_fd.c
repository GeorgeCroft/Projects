/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:54:26 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:54:28 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		long_nb;

	if (n == -2147483648)
	{
		long_nb = n / 10;
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-long_nb, fd);
	}
	if (-2147483648 < n && n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n == -2147483648)
		ft_putchar_fd(n + '8', fd);
	else
		ft_putchar_fd(n + '0', fd);
}
