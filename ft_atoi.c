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
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * negatif);

}