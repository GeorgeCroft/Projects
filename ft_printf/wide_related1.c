/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wide_related1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 20:32:55 by gmura             #+#    #+#             */
/*   Updated: 2018/03/07 20:32:58 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			wide_precision_len(wchar_t *wstr, t_flags *f)
{
	int		i;
	int		prec;

	i = 0;
	prec = f->fprecision;
	if (f->fdot == 0)
		return (ft_widestrlen(wstr));
	while (*wstr)
	{
		prec = prec - ft_charlen(*wstr);
		if (prec < 0)
			return (i);
		i = i + ft_charlen(*wstr);
		wstr++;
	}
	return (i);
}

int			widestr_precision(wchar_t *wstr, t_flags *f)
{
	int		len;
	int		i;

	i = 0;
	len = f->fprecision - ft_widestrlen(wstr);
	if (len < 0 && f->fdot)
		i = ft_putwidestr(wstr, f->fprecision);
	else
		i = ft_putwidestr(wstr, ft_widestrlen(wstr));
	return (i);
}

int			widestr_width(wchar_t *wstr, t_flags *f)
{
	int		len;

	len = f->fwidth - wide_precision_len(wstr, f);
	if (len > 0)
	{
		if (f->fminus)
		{
			widestr_precision(wstr, f);
			print_padd(len, ' ');
		}
		else
		{
			print_padd(len, (f->fzero) ? '0' : ' ');
			widestr_precision(wstr, f);
		}
		return (f->fwidth);
	}
	return (widestr_precision(wstr, f));
}

int			widestr_handle(va_list *lst, t_flags *f)
{
	wchar_t		*s;
	int			ret;

	s = va_arg(*lst, wchar_t *);
	if (s == NULL)
		s = L"(null)";
	ret = widestr_width(s, f);
	return (ret);
}
