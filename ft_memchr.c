#include "libft.h"
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char c2;
    int i;
    i = 0;
    ptr = (unsigned char *)s;
    c2 = (unsigned char)c;

    
    
    while (i < n - 1)
    {
        if (ptr[i] == c2)
        {
            return (&ptr[i]); //Aqui estamos pidendole que devuelva la direccion de memoria (por eso el &)pq el return tiene que ser void
        }
        
        i++;
    }
    return (0);
}