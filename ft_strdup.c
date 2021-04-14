#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t i;
    char *str;
    int len;
    
    len = ft_strlen(s);
    if(!s)
        return (0);
    str = ft_calloc(sizeof(char), len + 1);
    if(!str)
        return (0);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}