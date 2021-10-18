/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:01:12 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/18 22:17:59 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		i;

	i = -1;
	ret = (char *)malloc(ft_strlen(s1) + 1);
	if (!ret)
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	ret[i] = '\0';
	return (ret);
}
