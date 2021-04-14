#include "libft.h"

void    *ft_calloc(size_t elementCount, size_t elementSize)
{
    void *tab;
    tab = malloc(elementCount * elementSize);
    if(!tab)
        return(NULL);
    ft_memset(tab, 0, elementSize * elementCount);
    return((void *)tab);
}

