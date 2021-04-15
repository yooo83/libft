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
