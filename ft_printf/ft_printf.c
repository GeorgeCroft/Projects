/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 20:30:31 by gmura             #+#    #+#             */
/*   Updated: 2018/03/07 20:30:36 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list		lst;
	int			printat;

	va_start(lst, format);
	printat = print_before_percent((char *)format, &lst);
	va_end(lst);
	return (printat);
}
