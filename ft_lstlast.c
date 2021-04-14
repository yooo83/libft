#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst)
	{
		while(lst)
		{
			lst = lst->next;
		}
		return (lst);
	}
}