/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmura <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:57:29 by gmura             #+#    #+#             */
/*   Updated: 2017/12/21 10:57:31 by gmura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static size_t	ft_compute_arr_size(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	int		to_count;

	to_count = 1;
	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && to_count == 1)
		{
			to_count = 0;
			counter++;
		}
		if (s[i] == c && to_count == 0)
			to_count = 1;
		i++;
	}
	return (counter);
}

static char		**ft_build_r(char const *s, char c, size_t *ai, int *w)
{
	char		**r;
	size_t		i;

	*ai = 0;
	*w = 0;
	if (s == NULL)
		return (NULL);
	i = ft_compute_arr_size(s, c);
	r = (char**)malloc(sizeof(*r) * (i + 1));
	if (r == NULL)
		return (NULL);
	r[i] = 0;
	return (r);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**r;
	size_t		i;
	size_t		start_i;
	size_t		arr_i;
	int			new_word;

	r = ft_build_r(s, c, &arr_i, &new_word);
	i = 0;
	while (r != NULL && s[++i - 1] != '\0')
	{
		if (s[i - 1] != c && new_word == 0)
		{
			start_i = i - 1;
			new_word = 1;
		}
		if (new_word == 1 && s[i - 1] == c)
		{
			r[arr_i] = ft_strsub(s, start_i, i - 1 - start_i);
			new_word = 0;
			arr_i++;
		}
		if (new_word == 1 && s[i - 1 + 1] == '\0')
			r[arr_i] = ft_strsub(s, start_i, i - 1 - start_i + 1);
	}
	return (r);
}
