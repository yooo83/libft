#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = *lst;
		del((*lst)->content);
		*lst = ptr->next;
		free(ptr);
	}
}
