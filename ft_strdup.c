#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t size;
	void *ptr;
	
	size = ft_strlen(s);
	ptr = malloc(size + 1);
	
	if (ptr == NULL)
	{
		return (NULL);
	}

	ft_strlcpy((char *)ptr, s, size + 1);

	return (ptr);
}
