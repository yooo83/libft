#include "libft.h"

char    *ft_strchr(const char *str,int c)
{
    size_t i;
    const char *s = str;

    i = 0;
    while(s[i])
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