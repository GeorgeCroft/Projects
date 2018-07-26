/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialexand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 12:49:35 by ialexand          #+#    #+#             */
/*   Updated: 2017/12/12 18:24:30 by ialexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*el;

	el = (t_list*)malloc(sizeof(*el));
	if (el != NULL)
	{
		if (content == NULL)
		{
			el->content = NULL;
			el->content_size = 0;
		}
		else
		{
			el->content = (unsigned char*)malloc(content_size);
			if (el->content == NULL)
			{
				ft_memdel((void**)&el);
				return (NULL);
			}
			ft_memcpy(el->content, content, content_size);
			el->content_size = content_size;
		}
		el->next = NULL;
	}
	return (el);
}
