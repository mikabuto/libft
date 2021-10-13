/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:56:56 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/12 20:23:46 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	while (*s && maxlen--)
		s++;
	if (!(*s))
		return (maxlen);
	return (ft_strlen(s));
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	k;

// 	j = 0;
// 	if (!(needle[0]))
// 		return ((char *)haystack);
// 	while (haystack[j])
// 	{
// 		i = 0;
// 		k = 0;
// 		while (needle[k] && i < len)
// 		{	
// 			if (needle[k] != haystack[j + i])
// 				continue ;
// 			k++;
// 			i++;
// 			if (i == len)
// 				return ((char)haystack[j]);
// 		}
// 		j++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strnlen(needle, len);
	if (0 == needle_len)
		return ((char *)haystack);
	while (i <= (int)(len - needle_len))
	{
		if (0 == ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (0);
}
