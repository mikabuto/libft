/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 03:00:22 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/16 03:13:22 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*ret;

	len = ft_len(n);
	ret = (char *)malloc(len + 1);
	i = -1;
	while (++i < len)
	{
		if (n < 0)
		{
			ret[i++] = '-';
			ret[i] = -n / ft_power(len - i);
		}
		else
			ret[i] = n / ft_power(len - i - 1);
	}
	ret[i] = '\0';
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_len(-0));
}
