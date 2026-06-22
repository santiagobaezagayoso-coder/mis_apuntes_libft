#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	 size_t ts;
	 void *ptr;

	 ts = nmemb * size;
	 ptr = malloc(ts);
	
	 if (ptr == NULL) 
	 {
		 return (NULL);
	 }
	 ft_bzero(ptr, ts);
	 return (ptr);
}
