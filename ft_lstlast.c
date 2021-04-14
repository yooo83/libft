#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(lst == NULL)
		exit(EXIT_FAILURE);
	while(lst)
	{
		lst = lst->next;
	}
	return (lst);
}