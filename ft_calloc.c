/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:45:23 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:45:24 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*tab;

	tab = malloc(elementCount * elementSize);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, elementSize * elementCount);
	return ((void *)tab);
}
