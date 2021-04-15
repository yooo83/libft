/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:46:06 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:49:13 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new2;

	new = NULL;
	if (lst)
	{	
		while (lst)
		{
			new2 = ft_lstnew(f(lst->content));
			if (!new2)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			ft_lstadd_back(&new, new2);
			lst = lst->next;
		}
		return (new);
	}	
	else
		return (NULL);
}
