#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    int i;
    unsigned char *ptr;
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            ptr = &s[i];
            return (ptr);
        } 
        i++;
    }
    if (s[i] == '\0')
        {
            return (0);
        }
    return (ptr);
}