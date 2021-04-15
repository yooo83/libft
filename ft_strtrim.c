/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:43:23 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:43:30 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;

	size = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (s1)
		size = ft_strlen(s1);
	while (s1 && ft_strchr(set, s1[size]) && size > 0)
		size--;
	str = ft_substr(s1, 0, size + 1);
	return (str);
}
