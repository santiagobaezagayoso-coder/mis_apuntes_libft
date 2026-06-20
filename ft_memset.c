#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;

	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
