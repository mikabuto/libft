/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:50:49 by mikabuto          #+#    #+#             */
/*   Updated: 2021/11/08 17:20:42 by mikabuto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list	*nex;

	if (!lst || !(*lst) || !del)
		return ;
	nex = *lst;
	while (nex)
	{
		cur = nex;
		nex = cur->next;
		ft_lstdelone(cur, del);
	}
	*lst = NULL;
}
