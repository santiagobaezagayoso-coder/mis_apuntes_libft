#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;
	size_t			i;

	if (!dest && !src)
		return (dest);
	i = 0;
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (ptrd > ptrs)
	{
		while (i < n)
			i++;
		while (i != 0)
		{
			ptrd[i - 1] = ptrs[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}