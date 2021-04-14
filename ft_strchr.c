#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;
	const char	*s;

	i = 0;
	s = str;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (NULL);
}
