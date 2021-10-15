/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:07:10 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/15 21:30:19 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		subs = (char *)malloc(1);
		subs[0] = '\0';
		return (subs);
	}
	if ((start + len) < s_len)
		subs = (char *)malloc(len + 1);
	else
		subs = (char *)malloc(s_len - start + 1);
	while (i < len && s[i])
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
