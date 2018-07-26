/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:15:35 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 11:15:50 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*tmp;

	if (lst && f)
	{
		tmp = lst;
		while (tmp->next)
		{
			f(tmp);
			tmp = tmp->next;
		}
		f(tmp);
	}
}
