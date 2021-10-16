#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*begin;

	if (!lst || !(*lst) || !del)
		return ;
	begin = *lst;
	while ((*lst)->next)
	{
		(*del)(begin->content);
		(*lst) = (*lst)->next;
		free(begin);
		begin = (*lst)->next;
	}
}
