/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 20:32:24 by gmura             #+#    #+#             */
/*   Updated: 2018/03/07 20:32:26 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			char_width(unsigned char c, t_flags *f)
{
	int		ret;

	ret = 1;
	if (f->fwidth > 1)
	{
		ret = f->fwidth;
		if (f->fminus)
		{
			ft_putchar(c);
			while (--f->fwidth != 0)
				ft_putchar(' ');
		}
		else
		{
			while (--f->fwidth != 0)
				ft_putchar((f->fzero) ? '0' : ' ');
			ft_putchar(c);
		}
	}
	else
		ft_putchar(c);
	return (ret);
}
