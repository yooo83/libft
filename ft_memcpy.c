/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:46:25 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:46:26 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*source;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dst = (char *)dest;
	source = (char *)src;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
