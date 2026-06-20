#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	int		i;
	ptr = (unsigned char*)s;
	i = 0;

	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
