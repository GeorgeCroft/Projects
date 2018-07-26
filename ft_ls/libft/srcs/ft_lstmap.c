/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:49:42 by gmura             #+#    #+#             */
/*   Updated: 2018/03/20 17:49:45 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		ret = ft_lstmap(lst->next, f);
		ft_lstadd(&ret, f(lst));
	}
	else
		ret = f(lst);
	return (ret);
}
