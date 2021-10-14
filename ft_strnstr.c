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

#include <stdio.h>										//TODO
#include <string.h>										//TODO
// size_t	ft_strlen(const char *s, size_t maxlen)
// {
// 	while (*s && maxlen--)
// 		s++;
// 	if (!(*s))
// 		return (maxlen);
// 	return (ft_strlen(s));
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	j = 0;
	needle_len = ft_strlen((char *)needle);
	if (!(needle[0]))
		return ((char *)haystack);
	while (haystack[j] && j < len)
	{
		i = 0;
		while (needle[i])
		{	
			printf("j = %d i = %d\n", j, i);
			if (needle[i] != haystack[j + i])
				break ;
			if (i == needle_len - 1)
				return ((char *)&(haystack[j]));
			i++;
		}
		j++;
	}
	return (0);
}

int	main(void)
{
	printf("ft_strnlen: %s\n", ft_strnstr("abcdef", "bc", 4));
	return 0;
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	int		i;
// 	size_t	needle_len;

// 	i = 0;
// 	needle_len = ft_strnlen(needle, len);
// 	if (0 == needle_len)
// 		return ((char *)haystack);
// 	while (i <= (int)(len - needle_len))
// 	{
// 		if (0 == ft_strncmp(haystack, needle, needle_len))
// 			return ((char *)haystack);
// 		haystack++;
// 		i++;
// 	}
// 	return (0);
// }
