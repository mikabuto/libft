/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:00:23 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/15 23:23:55 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

size_t	search_first(char const *s1, char const *set)
{
	size_t	i;
	size_t	set_len;

	i = 0;
	set_len = ft_strlen(set);
	while (i++ < set_len)
	{
		if (s1[i - 1] != set[i - 1])
		{
			i = 0;
			break ;
		}
	}
	return (i);
}

size_t	search_last(char const *s1, char const *set)
{
	size_t	j;
	size_t	set_len;
	size_t	s1_len;

	j = 0;
	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	while (j++ < set_len)
	{
		if (s1[s1_len - j] != set[set_len - j])
		{
			j = 0;
			break ;
		}
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	s1_len;
	size_t	i;
	char	*ret;

	s1_len = ft_strlen(s1);
	first = search_first(s1, set);
	last = search_last(s1, set);
	ret = (char *)malloc(s1_len - first - last + 1);
	i = 0;
	while (i < s1_len - first - last)
	{
		ret[i] = s1[i + first];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
