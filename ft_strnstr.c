/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:47:23 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:47:24 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(find[0]))
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		if (str[i] == find[j])
		{
			while (str[i + j] == find[j] && (i + j) < n)
			{
				if (find[j + 1] == '\0')
					return ((char *)str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
