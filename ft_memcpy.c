#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *ptrd;
    unsigned char       *ptrs;
    size_t          i;

    if (!dest && !src)
    {
	    return (dest);
    }

    ptrd = (unsigned char *)dest;
    ptrs = (unsigned char *)src;
    i = 0;

    while(i < n)
    {
        ptrd[i] = ptrs[i];
        i++;
    }
    return (dest);
}
