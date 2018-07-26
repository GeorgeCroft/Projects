/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:12:14 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 11:12:17 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*next;

	current = *alst;
	next = current->next;
	while (current->next != NULL)
	{
		ft_lstdelone(&current, del);
		current = next;
		next = current->next;
	}
	ft_lstdelone(&current, del);
	*alst = NULL;
}
