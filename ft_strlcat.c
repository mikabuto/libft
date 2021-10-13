/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:26:56 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/12 18:22:04 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_length;
	size_t	remaining_size;
	size_t	d_length;
	size_t	copy_length;

	s_length = ft_strlen(src);
	remaining_size = dstsize;
	while (*dst && remaining_size > 0)
	{
		dst++;
		remaining_size--;
	}
	d_length = dstsize - remaining_size;
	if (d_length < remaining_size)
	{
		copy_length = remaining_size - 1;
		if (s_length < copy_length)
		{
			copy_length = s_length;
		}
		ft_memcpy(dst, src, copy_length);
		dst[copy_length] = '\0';
	}
	return (d_length + s_length);
}
