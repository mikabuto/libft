/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:51:18 by mikabuto          #+#    #+#             */
/*   Updated: 2021/10/18 22:08:57 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*begin;

	begin = *lst;
	if (!begin)
		*lst = new;
	else
	{
		while (begin->next)
			begin = begin->next;
		begin->next = new;
	}
}
