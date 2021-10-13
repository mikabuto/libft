/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:37:33 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/12 19:43:51 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(const char *)s && n--)
	{
		if (*(const char *)s == c)
			return ((void *)s);
		s++;
	}
	if (c == '\0')
		return ((void *)s);
	return (0);
}
