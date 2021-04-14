#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	src_size = ft_strlen((char *)src);
	if (size == 0)
		return (src_size);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
