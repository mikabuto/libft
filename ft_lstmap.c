#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	if (!lst)
		return (NULL);
	ret = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst->next)
	{
		ft_lstadd_back(&ret, ft_lstnew((*f)(lst->content)));
		lst = lst->next;
	}
	return (ret);
}
