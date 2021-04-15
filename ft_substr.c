/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:47:30 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:47:30 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	str = ft_calloc(sizeof(*s), len + 1);
	if (!str)
		return (0);
	if (!s)
		return (0);
	if (start < ft_strlen(s))
	{
		ft_strncpy(str, (char *)(s + start), len);
	}
	ptr = ft_strdup(str);
	free(str);
	return (ptr);
}
