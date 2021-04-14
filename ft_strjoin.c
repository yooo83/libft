#include "libft.h"
 
char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str1;
    char *str2;
    char *ptr1;
    char *ptr2;
    char *ptr3;

    if ((!s1 && !s2) || (!s1 || !s2))
        return (0);
    str1 = ft_calloc(sizeof(s1), ft_strlen(s1) + 1);
    if (!str1)
        return (0);
    str2 = ft_calloc(sizeof(s2), ft_strlen(s2) + 1);
    if (!str2)
        return (0);
    ptr1 = ft_strcpy(str1, (char *)s1);
    ptr2 = ft_strcpy(str2, (char *)s2);
    ptr3 = ft_strdup(ft_strcat(ptr1, ptr2));
    free(str1);
    free(str2);
    return(ptr3);
}