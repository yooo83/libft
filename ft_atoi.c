/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:45:07 by ygaiero           #+#    #+#             */
/*   Updated: 2021/04/15 15:45:09 by ygaiero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	num;
	size_t	negatif;

	i = 0;
	negatif = 1;
	num = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negatif *= -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * negatif);
}
