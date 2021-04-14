#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		exit(EXIT_FAILURE);
	new->next = *alst;
	*alst = new;
}
